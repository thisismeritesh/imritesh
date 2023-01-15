#include<stdio.h>
#include<math.h>
void compound_interest()
{
    float p, t, r;
    printf("enter the value of principle amount\n ");
    scanf("%f", &p);
    printf("enter the rate of interest at which the loan was charged\n ");
    scanf("%f", &r);
    printf("enter the time in months  for which the loan was given \n ");
    scanf("%f", &t);
    float x, y;
    x = pow((1 + (r / 100)), (t / 12));
    y = p * (x - 1);
    printf("the compound interest is %f\n", y);
    printf("the total amount after  compound interest is  %f\n", y + p);
}
int main(){
    compound_interest();
    return 0;
}