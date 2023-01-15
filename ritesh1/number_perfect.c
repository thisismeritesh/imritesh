#include <stdio.h>

int main()
{
    int number, sum, c;
    printf("enter the number ");
    scanf("%d", &number);
    sum = 0;
    for (int i = 1; i < number; i++)
    {
        /* code */ if (number % i == 0)

        {
            /* code */ printf("%d\t", i);
            sum += i;
        }
    }
    if (sum == number)
    {
        printf("number is perfect");
    }
    else
    {
        if (sum < number)
        {
            /* code */ printf("number is deficient");
        }
        if (sum > number)
        {
            /* code */ printf("number is abundant");
        }
    }

    return 0;
}