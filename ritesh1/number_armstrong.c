#include <stdio.h>
#include <math.h>

int main()
{
    int x, n, digit, f, sum, number;

    printf("enter the value of number ");
    scanf("%d", &n);
    x = n;
    number = n;
    sum = 0;
    int count = 0;
    while (n)
    {
        count++;
        n = n / 10;
    }

    for (int i = 0; i < count; i++)
    {
        digit = x % 10;

        x = x / 10;
        sum += pow(digit, count);
    }
    if (number != sum)
    {
        f = 1;
    }
    if (f == 1)
    {
        printf("number is not armstrong");
    }
    else
    {
        printf("number is  armstrong");
    }

    return 0;
}