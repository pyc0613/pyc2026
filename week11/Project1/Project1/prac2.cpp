#include <stdio.h>

void swap(int* a, int* b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1 = 45515;
    int num2 = 2023;

    swap(&num1, &num2);
    printf("%d, %d", num1, num2);

    return 0;
}