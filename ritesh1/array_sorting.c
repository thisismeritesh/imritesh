#include <stdio.h>

int main()
{
    int a[100];
    int temp;
    int n;
    printf("enter the value of size of array");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        /* code */ scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            /* code */ if (a[j] % 2 == 1 && a[j + 1] % 2 == 0)
            {
                temp = a[j];

                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        /* code */ printf("%d\t", a[i]);
    }

    return 0;
}