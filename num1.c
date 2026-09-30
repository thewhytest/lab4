#include <locale.h>
#include <stdio.h>
#include <stdlib.h>


int main() {
    setlocale(LC_ALL, "RUS");
    char c = '!';
    int i = 2;
    float f = 3.14f;
    double d = 5e-12;
    printf("\nВсе значения:\n c='%c'\n i=%d\n f=%.2f\n d=%.12f\n", c, i, f, d);
    return 0;
}
