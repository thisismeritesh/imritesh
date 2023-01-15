#include <stdio.h>

int factorial(int a );

int main()
{
    int a;
  scanf("%d",&a);
  printf("thye factorial of given number %d is %d",a,factorial(a));


    return 0;
}


int factorial(int a )
{ if (a==1||a==0)
{
    return 1;
}
else{
 int result=a*factorial(a-1);
 return result;}
}