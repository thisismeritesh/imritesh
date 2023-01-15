#include <stdio.h>
int main()
{
    int a[3][3], temp1[3], temp2[3];
    int f, i, j;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i>j&&a[i][j]==0)
            {
                f=1;
            }
            
        }
    }
    if (f == 1)

    {
        printf("matrix is   upper traingular ");
    }
    else
    {
        printf("matrix is  not upper traingular ");
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum += a[i][j];
        }
    }
    printf("the sum is %d", sum);
}