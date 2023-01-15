#include <stdio.h>
int factorial(int f);
int main()
{
    float x = 0.0;
 
    for (int j = 2; j <= 10; j++)
    {
       
        
        x = x + (1.0 / (factorial(j)));
    }
printf("%f",x+2);
    return 0;
}
int factorial(int n)
{
    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
