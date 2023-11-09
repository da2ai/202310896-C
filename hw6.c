#include <stdio.h>

void odd(int* arr, int len) {
    printf("Odd numbers: ");
    for (int i = 0; i < len; ++i) {
        if (arr[i] % 2 != 0) {
            printf("%d ", arr[i]);
        }
    }
}

void even(int* arr, int len) {
    printf("Even numbers: ");
    for (int i = 0; i < len; ++i) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }
}
int main() {
    int arr[5] = { 0 };
    printf("Please input five integers: ");
    for (int i = 0; i < 5; ++i) {
        scanf("%d", &arr[i]);
    }
    odd(arr, 5);    
    printf("\n");
    even(arr, 5);   
}