#include <stdio.h>
int facto(int n)
{
    int i;
    int factorial = 1;

    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}
void strong()
{
    int number, digit, sum, x, f;
  
    sum=0;
    scanf("%d", &number);
      x = number;
    while (number != 0)

    {
        digit = number % 10;
        number = number / 10;
         f=facto(digit);
         sum=sum+f;

    }
     if (sum != x)
    {
        printf("number is not  strong");
    }
    else
    {
        printf("number is  strong");
    }
    printf("%d",sum);
}
int main()
{
    strong();

   

    return 0;
}