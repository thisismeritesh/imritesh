#include<stdio.h>
void matrix_detrminent()
{
    int a[3][3];

    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {

            scanf("%d", &a[i][j]);
        }
    }
    int determinent, x, y, z;
    x = a[0][0] * ((a[1][1] * a[2][2]) - (a[2][1] * a[1][2]));
    y = a[0][1] * ((a[1][0] * a[2][2]) - (a[2][0] * a[1][2]));
    z = a[0][2] * ((a[1][0] * a[2][1]) - (a[2][0] * a[1][1]));
    determinent = x - y + z;
    printf("the determinent will be %d", determinent);
}
int main(){
    matrix_detrminent();
    return 0;
}