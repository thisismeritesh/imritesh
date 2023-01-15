#include <stdio.h>

int main()
{
    char a[100];
    fgets(a, 100, stdin);
    printf("enter the charcter which you want to find  ");
    char k;
    char p1 = k;
    int j = 0;
    int r;

    scanf("%c", &p1);
    for (int i = 0; a[i]; i++)
    {
        if (p1 == a[i])
        {
            ++j;

         
            
        }
    
    }
    printf("total number of occurrances are of %c is %d ",p1,j);
}