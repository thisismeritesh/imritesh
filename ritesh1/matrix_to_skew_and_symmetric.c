#include <stdio.h>

int main()
{
    int a[3][3], b[3][3], c[3][3];
    int i, j, k;
    printf("enter the elements if matrix a\n ");
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            b[i][j] = a[i][j] + a[j][i];
            c[i][j] = a[i][j] - a[j][i];
        }
    }
    printf("\n");
    printf("symmetric matrix is:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("skew symmetric matrix is:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
}