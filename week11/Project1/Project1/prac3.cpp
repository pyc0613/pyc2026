#include <stdio.h>

void apply_discount(int* price, int n, int percent) {
    for (int i = 0; i < n; i++) {
        price[i] = price[i] * (100 - percent) / 100;
    }
}

int main() {
    int prices[5] = { 12000, 8500, 3000, 45000, 990 };
    int percent;

    printf("할인율(%%)을 입력하시오 :");
    scanf_s("%d", &percent);

    printf("할인 전 : %d %d %d %d %d\n", prices[0], prices[1], prices[2], prices[3], prices[4]);
    apply_discount(prices, 5, percent);
    printf("할인 후 : %d %d %d %d %d ", prices[0], prices[1], prices[2], prices[3], prices[4]);
}
