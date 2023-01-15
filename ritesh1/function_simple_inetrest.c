#include<stdio.h>
void simple_interest()
{
    float p, t, r;
    printf("enter the value of principle amount\n ");
    scanf("%f", &p);
    printf("enter the rate of interest at which the loan was charged\n ");
    scanf("%f", &r);
    printf("enter the time in years for which the loan was given \n ");
    scanf("%f", &t);
    printf("the simple interest   is %f\n ", (p * r * t) / 100);
    printf("the priniple amount after the loan period is %f\n ", p + ((p * r * t) / 100));
}

int main(){
    simple_interest();
    return 0;
}