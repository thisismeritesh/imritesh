#include <stdio.h>
#include <math.h>
int facto(int n)
{
    int i;
    int factorial = 1;

    for (i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}
void strong(int a)
{
    int sum, digit, num;
    num = a;
    sum = 0;
    while (a > 0)
    {
        digit = a % 10;
        a = a / 10;
        sum += facto(digit);
    }

    if (sum == num)
    {
        printf("%d\t", sum);
    }
}
void armstrong(int number)
{
    int x, digit, count, n;
    int sum = 0;
    count = 0;

    x = number;
    n = number;

    while (number > 0)
    {
        count++;
        number = number / 10;
    }
    for (int i = 0; i < count; i++)
    {
        digit = n % 10;
        n = n / 10;
        sum += pow(digit, count);
    }
    if (sum == x)
    {
        printf("%d\t", sum);
    }
}
void perfect(int number)
{

    int sum, c;

    sum = 0;
    for (int i = 1; i < number; i++)
    {
        if (number % i == 0)

        {

            sum += i;
           
        }
    }
    if (sum == number)
    {
        printf(" %d", number);
    }
}
int main()
{
    int start, end;
    printf("enter the star number  ");
    scanf("%d", &start);
    printf("enter the end number  ");
    scanf("%d", &end);

    for (int a = start; a <= end; a++)
    {
        strong(a);
    }
    printf("\n");
    for (int a = start; a <= end; a++)
    {
        armstrong(a);
    }
    printf("\n");
    for (int a = start; a <= end; a++)
    {
        perfect(a);
    }
    printf("\n");

    return 0;
}