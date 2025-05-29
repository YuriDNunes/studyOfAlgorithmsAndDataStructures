#include <bits/stdc++.h>

using namespace std;

int search(int nums[],int low, int high, int item) {

    // caso nao encontrar o numero
    if (low > high) return -1;

    // pegar o elemento do meio do vetor
    int middle = low + (high - low) / 2;

    // se o elemento do meio for o numero solicitado entao feito
    if (nums[middle] == item) return middle;

    // se o caso acima for falso buscar o numero por recursao
    if (item < nums[middle]) {
        // checar o subvetor da esquerda recusivamente
        return search(nums, low, middle - 1, item);
    } else {
        // checar o subvetor da direita recursivamente
        return search(nums, middle + 1, high, item);
    }

}

int main () {
    int nums[11] = {1, 12, 23, 43, 54, 65, 76, 87, 98, 99, 100};
    int num = 43;
    int n = sizeof(nums) / sizeof(nums[0]);

    printf("Index %d",search(nums,0,n-1,num));

    return 0;
}