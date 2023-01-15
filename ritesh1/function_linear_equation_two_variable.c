#include<stdio.h>
void linear_equation_two_variable()
{
    int a, b, c, p, q, r;
    int x, y;
    int m, k, l;
    printf(" for the  1st linear equation ax+by=c,enter the value of the a ,b and  c \n");
    printf("enter the value of a \n");
    scanf("%d", &a);
    printf("enter the value of b \n");
    scanf("%d", &b);
    printf("enter the value of c \n");
    scanf("%d", &c);
    printf(" for the  2nd linear equation px+qy=r,enter the value of the p ,q and  r  \n");
    printf("enter the value of p \n");
    scanf("%d", &p);
    printf("enter the value of q \n");
    scanf("%d", &q);
    printf("enter the value of r \n");
    scanf("%d", &r);
    m = (b * r) - (c * q);
    k = (p * c) - (a * r);
    l = (b * p) - (q * a);
    if (((a / p) == (b / q)) && ((b / q) != (c / r)) && ((a / p) != (c / r)))
    {
        printf("no sloution for this set of linear equations ! \n ");
    }
    if (((a / p) == (b / q)) && ((b / q) == (c / r)) && ((a / p) == (c / r)))
    {
        printf(" infinite sloutions  for this set of linear equations ! \n ");
    }
    if ((b * p) != (q * a))
    {
        printf("unique  sloution for this set of linear equations ! \n ");
        printf(" the value of x = %d/%d\n", m, l);
        printf(" the value of y = %d/%d\n", k, l);
    }
}
int main(){
    linear_equation_two_variable();
    return 0;
}