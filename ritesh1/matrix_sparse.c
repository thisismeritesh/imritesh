#include <stdio.h>

int main()
{
    int a[3][3], count1, count2;
    int i, j, k;
   
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {

            printf("enter the elements if matrix a\n ");
            scanf("%d", &a[i][j]);
        }
    }count1=0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (a[i][j]==0)
            {
               count1++; 
            }
            
        }
    }count2=0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (a[i][j] != 0)
            {
               count2++;
            }
            
        }
    }
    if (count1>count2)
    {
       printf("input matrix is sparse matrix");
    }
    else{
          printf("input matrix is not a sparse matrix");

    }}
    