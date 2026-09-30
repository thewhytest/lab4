#include <stdio.h>
#include <locale.h>

int is_win(int a, int b);
void print_result(int win);

int main(void)
{
  setlocale(LC_ALL,"Russian");
    int a, b;

    puts("Введите номера кнопок игроков A и B:");
    scanf("%d %d", &a, &b);

    print_result(is_win(a, b));

    return 0;
}

/* Условие победы: ровно один номер чётный */
int is_win(int a, int b)
{
    return (a % 2 == 0) != (b % 2 == 0);
}

void print_result(int win)
{
    if (win)
        puts("Победа в раунде");
    else
        puts("Нет победы");
}
