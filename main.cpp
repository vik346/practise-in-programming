#include <stdio.h>

int main() {
    int t1, t2, t3;
    scanf("%d %d %d", &t1, &t2, &t3); // Введення трьох чисел

    float total_time = (float)(t1 + t2 + t3); // Сумуємо часи
    printf("%.2f\n", total_time); // Виводимо результат з округленням до 2 знаків після коми

    return 0;
}


