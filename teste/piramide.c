#include <stdio.h>

void printSpaces(int n);

void printHashes(int n);

int main(void)
{
    int height;

    do
    {
        printf("Altura: ");
        scanf("%d", &height);
    }
    while (height < 1 || height > 8);

    for (int i = 1; i <= height; i++)
    {
        printSpaces(height - i);
        printHashes(i);
        printf("  ");
        printHashes(i);
        printf("\n");
    }

    return 0;
}

void printSpaces(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" ");
    }
}

void printHashes(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
}