
#include <stdio.h>
int main()
{
    int n, i, j, temp,count;
    int a[100];
    printf("enter how many elements the array wil have");
    scanf("%d", &n);
    for (i = 0; i < n; i++)

    {
        printf("enter the elements of array %d", i);
        scanf("%d", &a[i]);
    }
    count=0;
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            if (a[j+n-1]==a[i])
            {
                 count++;
            }
            
           
        }
        
    }
    printf("the number of duplicate elements are %d",count);
    
    
    
    
    
    }