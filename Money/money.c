#include <stdio.h>
#include <math.h>

int main(void)
{
    float change_due;
    int cents, coins = 0;

    do
    {
        printf("Troco devido: ");
        scanf("%f", &change_due);
    }
    while (change_due < 0);

    cents = round(change_due * 100);

    while (cents >= 25)
    {
        cents -= 25;
        coins++;
    }

    while (cents >= 10)
    {
        cents -= 10;
        coins++;
    }

    while (cents >= 5)
    {
        cents -= 5;
        coins++;
    }

    while (cents >= 1)
    {
        cents -= 1;
        coins++;
    }

    printf("%d\n", coins);

    return 0;
}

