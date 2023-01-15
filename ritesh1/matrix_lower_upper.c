#include <stdio.h>
int main()
{
    int a[3][3], b[3][3];
    int f, i, j;
    printf("enter values of matrix a\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("enter values of matrix b\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
printf("lower traingular matrix is:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i < j)
            {
                a[i][j] = 0;
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i > j)
            {
                b[i][j] = 0;
            }
        }
    }printf("lower traingular matrix is:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("  %d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
printf("upper traingular matrix is:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("  %d\t", b[i][j]);
        }
        printf("\n");
    }
}