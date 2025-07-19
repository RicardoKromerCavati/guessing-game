#include <stdio.h>

int main()
{
    int x = 0;
    int y = 0;

    printf("Please enter the first number to muiltiply: ");
    scanf("%d", &x);

    printf("Please enter the second number to muiltiply: ");
    scanf("%d", &y);

    int result = x * y;

    printf("The result is %d!\n", result);

    return 0;
}