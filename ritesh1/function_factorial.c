#include<stdio.h>
void factorial()
{
    int n;
    int factorial = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }
    printf(" the factorial of %d  is %d  ", n, factorial);
}
int main(){
    factorial();
    return 0;
}