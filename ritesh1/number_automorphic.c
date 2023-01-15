#include <stdio.h>
#include <math.h>
int power(int a, int b)

{
    
    int ans = 1;
   
    for (int i = 0; i < b; i++)
    {
        ans *= a;
    }
  
    return ans;
}
int automorphic(int n)
{

   int  x, digit, f;
   
   int count = 0;
    digit = 0;
    x=n;
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
   
    
    if (x == ((x * x) % (power(10, count))))
    {
        printf("%d\t",x);
    }
    return x;
}

int main()
{
    int start,end,number;
    printf("enter the start number ");
    scanf("%d",&start);
     printf("enter the end number ");
    scanf("%d",&end);
    for (int i = start; i < end; i++)
    {
        automorphic(i);
    }
    
    
    return 0;
}