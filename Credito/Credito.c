#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long long card_number;
    do
    {
        card_number = get_long("Número: ");
    }
    while (card_number <= 0);

    int num_digits = 0;
    long long temp = card_number;
    while (temp > 0)
    {
        temp /= 10;
        num_digits++;
    }

    if ((num_digits == 13 || num_digits == 16) && card_number / 1000000000000 == 4)
    {
        printf("VISA\n");
    }
    else if (num_digits == 15 && (card_number / 10000000000000 == 34 || card_number / 10000000000000 == 37))
    {
        printf("AMEX\n");
    }
    else if (num_digits == 16 && (card_number / 100000000000000 == 51 || card_number / 100000000000000 == 52 ||
                                  card_number / 100000000000000 == 53 || card_number / 100000000000000 == 54 ||
                                  card_number / 100000000000000 == 55))
    {
        printf("MASTERCARD\n");
    }
    else
    {
        printf("INVALID\n");
    }

    return 0;
}
