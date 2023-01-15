#include <stdio.h>
int main()
{
    int a[3][3], sum;
    int f, i, j;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i < j&&a[i][j] == 0)
            {
                
                    f = 1;
                    break;
                
            }
        }
    }
    if (f==1)

    {
       printf("matrix is   lower traingular ");
    }
    else
    {
         printf("matrix is not  lower traingular ");
    }
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            sum +=a[i][j];
        }
        
    }
    printf("the sum is %d",sum);
    

}