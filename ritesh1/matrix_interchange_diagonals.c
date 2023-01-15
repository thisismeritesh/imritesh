#include <stdio.h>
int main()
{
    int a[3][3], temp1[3], temp2[3];
    int f, i, j;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                temp1[i] = a[i][j];
            }
            if ((i + j == 2))
            {
                temp2[i] = a[i][j];
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                a[i][j] = temp2[i];
            }
            if ((i + j) == 2)
            {
                a[i][j] = temp1[i];
            }
        }
    }
    for (int i = 0; i < 3; i++)
{
        for (int j = 0; j < 3; j++)
        {
            printf("  %d\t", a[i][j]);
        }
    printf("\n");}
}