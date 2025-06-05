#include <iostream>
#include <vector>
#include <algorithm>
#include <string>


void generatePermutations(std::string str, int begin, int end) {

    // Base case, if begin is equal to end so we have found a solution
    if (begin == end) {
        std::printf("%s\n", str.c_str());
        return;
    }

    for (int i = begin; i <= end; i++) {

        // 1. Try one option: Swap the actual char with the char in the position begin
        std::swap(str[begin], str[i]);

        // 2. Call the function recursively to build the rest of the permutation
        generatePermutations(str, begin + 1, end);

        // 3. Backtracking: undo the swap, to restore to the original state and try other options
        std::swap(str[begin], str[i]);

    }
}

int main() {

    std::string text;
    std::getline(std::cin, text);
    int n = text.length();

    std::printf("Permutations of %s\n", text.c_str());
    /*
    We are sending the string "text", the begin is the position 0 of the vector from the string,
    and the end is the variable N which takes the length of the TEXT and subtracts 1
    to have the last char of the vector from the string.
    Example: Text: Lion, Begin: "L", End: text.length = 4, we don't have a char in this position
    so we send to the function N - 1 = 3, in the position 3 we have the char "N"
    */
    generatePermutations(text, 0, n - 1);

    return 0;
}