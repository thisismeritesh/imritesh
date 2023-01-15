#include <stdio.h>

int main()
{
    int a[3][3];
    int i, j, f1;
    printf("enter the elements if matrix a\n ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (a[i][j] != a[j][i])
            {
                f1 = 1;
                break;
            }
        }
    }
    if (f1 == 1)
    {
        printf("the matrix  is not  a  symmetric matrix");
    }
    else
    {
        printf("the matrix  is  a symmetric matrix");
    }
    printf("\n");
}