#include <stdio.h>

int main()
{
    int x, n, sum=0;
    printf("enter the value of number ");
    scanf("%d", &n);
    x = n;
    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        n = n / 10;

        count++;
        if(n==0)
        break;
    }
    printf("total number of digits are %d\n", count );
    for (int i = 0; i < count; i++)
    {

        sum += x % 10;
        x = x / 10;
    }
    printf("total sum of digits are %d", sum);

    return 0;
}