#include<stdio.h>

void multiplication()

{
    int i, n;
    int x;
    int multiply = 1.0;
    printf("how many numbers you wnat to multiply");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        multiply = multiply * x;
    }
    printf(" the product of %d entered numbers is   %d   ", n, multiply);
}
int main(){
    multiplication();
    return 0;
}