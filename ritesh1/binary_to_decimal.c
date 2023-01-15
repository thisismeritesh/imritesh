#include <stdio.h>
#include <math.h>
int main()
{
    int n, x, count, bin[100];
    printf("enter the size of the number ");
    scanf("%d", &n);
    x = n;
    count = 0;
    int a[100];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &bin[i]);
    }

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += bin[i] * pow(2, n - 1 - i);
    }
    printf("%d\n", sum);

    return 0;
}