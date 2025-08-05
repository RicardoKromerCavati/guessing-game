#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 3;
    int b = 2;

    double points = a / (double)b;

    printf("%.2f\n", points);

    double pi = 3.1415;
    int convertedPi = (int)pi; //information will be lost

    printf("pi: %f\nconverted pi: %d\n", pi, convertedPi);

    int n1 = rand();
    int n2 = rand();

    printf("n1: %d\nn2: %d\n", n1, n2);

    return 0;
}