#include <stdio.h>

int main()
{
int n;
scanf("%d",&n);


for (int  i = 1; i <=2*n; i++)
{  if(i<=5)
    {for (int j =1 ; j >=i; j--)
    {
        printf("*");
    }

    printf("\n");}
else

if(i>5)
    {for (int j =1 ; j >=2*n-1-i; j--)
    {
        printf("*");
    }

    printf("\n");}



}



    return 0;
}