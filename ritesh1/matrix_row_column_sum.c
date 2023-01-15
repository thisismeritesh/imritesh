#include <stdio.h>

int main()
{
    int a[3][3], b[3], c[3];
    int i, j, k;
   
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {

            printf("enter the elements if matrix a\n ");
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {b[i]=0;
        for (j = 0; j < 3; j++)
        {
            b[i] += a[i][j];
        }
    }
    for (i = 0; i < 3; i++)
    {c[i]=0;
        for (j = 0; j < 3; j++)
        {
            c[i] += a[j][i];
        }
    }
    for (i = 0; i < 3; i++)
    {

        printf("sum of %d row is %d\n", i + 1, b[i]);
    }

    for (i = 0; i < 3; i++)
    {
        printf("sum of %d column is %d\n", i + 1, c[i]);
    }
}