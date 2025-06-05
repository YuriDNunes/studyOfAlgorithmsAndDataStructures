#include <iostream>

int factorial(int n) {

    // Base case, if the number! is equal to 0!(0! = 1) then we return 1
    if (n == 0) {
        return 1; // We use return 1, because the function is the type INT so we have to return the same type of the function
    }
    else {
        return n * factorial(n-1);
    }

}

int main() {

    int number;
    std::printf("Enter a Number: ");
    std::scanf("%d", &number);

    std::printf("The factorial of %d is %d\n",number,factorial(number));

}