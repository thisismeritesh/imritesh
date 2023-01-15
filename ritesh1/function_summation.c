#include<stdio.h>
void additon_subtraction()
{
    int i, n, x;
    int sum = 0;
    printf("how many numbers you wnat to add\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        sum = sum + x;
    }
    printf(" the sum of %d entered numbers is  =  %d", n, sum);
}
int main(){
    additon_subtraction();
    return 0;
}