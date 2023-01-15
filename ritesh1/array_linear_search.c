#include <stdio.h>
void main()
{
    int n,
        ele, f = 0, k, i;
    int a[100];
    printf("enter how many elements the array wil have");
    scanf("%d", &n);
    for (i = 0; i < n; i++)

    {
        printf("enter the elements of array %d", i);
        scanf("%d", &a[i]);
    }

    printf("enter the elemrnt whuich you want to find in array");
    scanf("%d", &ele);
    for (i = 0; i < n; i++)
    {
        if (a[i] == ele)
        {
            f = 1;
            k = i + 1;
            /* code */ break;
        }
    }
    if (f == 1)
    {
        printf("elemrnt founded on %d", k);
    }
    else
    {
        printf(" element not found"); /* code */
    }
}