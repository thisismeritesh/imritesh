
#include <stdio.h>
void main()
{
    int n, i, j, temp;
    int a[100];
    printf("enter how many elements the array wil have");
    scanf("%d", &n);
    for (i = 0; i < n; i++)

    {
        printf("enter the elements of array %d", i);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {

                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
