#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>


int main() {
    setlocale(LC_ALL, "Russian");

    int n;

    printf("Введите целое число: ");
    scanf("%d", &n);
    int last = n % 10;
    int first = n / 100;

    int mid = (n / 10) % 10;  
    int sumaa = last + first + mid;

    printf("Последняя цифра %d\n",last);
    printf("первая цифра %d\n", first);
    printf("средняя цифра %d\n", mid);
    printf("сумма цифр %d\n", sumaa);
    return 0;
}
