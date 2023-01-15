#include<stdio.h>

void matrix_inverse()
{

    int a[3][3], c[3][3];
    int e[3][3], d[3][3];
 int i, j;
    int det, x, y, z;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }





   
    det = (a[0][0] * ((a[1][1] * a[2][2]) - (a[2][1] * a[1][2]))) - (a[0][1] * ((a[1][0] * a[2][2]) - (a[2][0] * a[1][2]))) + (a[0][2] * ((a[1][0] * a[2][1]) - (a[2][0] * a[1][1])));
    if (det != 0)
    {
        c[0][0] = (a[1][1] * a[2][2]) - (a[2][1] * a[1][2]);
        c[0][1] = -(a[1][0] * a[2][2]) + (a[2][0] * a[1][2]);
        c[0][2] = (a[1][0] * a[2][1]) - (a[2][0] * a[1][1]);
        c[1][0] = -(a[0][1] * a[2][2]) + (a[2][1] * a[0][2]);
        c[1][1] = (a[0][0] * a[2][2]) - (a[2][0] * a[0][2]);
        c[1][2] = -(a[0][0] * a[2][1]) + (a[2][0] * a[0][1]);
        c[2][0] = (a[0][1] * a[1][2]) - (a[1][1] * a[0][2]);
        c[2][1] = -(a[0][0] * a[1][2]) + (a[1][0] * a[0][2]);
        c[2][2] = (a[0][0] * a[1][1]) - (a[1][0] * a[0][1]);

        for (i = 0; i < 3; i++)

        {
            for (j = 0; j < 3; j++)
            {
                d[i][j] = c[j][i];
            }
        }

        printf("the determinent will be %d\n", det);
        printf("the inverse of the matrix will be \n");

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                printf("%f\t", 1.0 * d[i][j] / det);
            }
            printf("\n");
        }
    }
    else
    {
        printf("because determinent is less than or equal to zero inverse of input matrix is not possible");
    }
}
int main(){
    matrix_inverse();
    return 0;
}