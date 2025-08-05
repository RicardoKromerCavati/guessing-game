#include <stdio.h>

int main()
{
    int number = 0;
    printf("Please enter a number to see its multiplication table: ");
    scanf("%d", &number);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", number, i, number * i);
    }

    return 0;
}