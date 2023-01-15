#include<stdio.h>
#include<math.h>
void nth_root()
{

    double a, b;
    printf("enter the value of  number  A");
    scanf("%lf", &a);
    printf("enter the   B upto which the number  will be rooted");
    scanf("%lf", &b);
    printf(" nth root  is %lf", pow(a, 1.0 / b));
}

int main(){
    nth_root();
    return 0;
}