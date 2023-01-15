
#include <stdio.h>

int main()
{
    int a[3][3];
    int sum1, sum2, f,f1,f2;
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {

            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        int sum1 = 0, sum2 = 0;
        for (int j = 0; j < 3; j++)
        {
            if (i == j&&a[i][j]!=1)

            {
               
                
                    f1 = 1;
                
            }
            if (i != j&&a[i][j]!=0)
            {
              
                
                    f2 = 1;
                
            }
        }
    }
    if (f1==1&&f2==1)
    {
        printf("input matrix is not  an identity matrix");
    }
    else
    {
        printf("input matrix is   an identity matrix");
    }
}