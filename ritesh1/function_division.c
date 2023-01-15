#include<stdio.h>
void division()
{

    int i, n;
    int x;
    float divide;
    scanf("%f", &divide);
    printf("how many numbers you wnat to divide");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        divide = 1.0 * divide * (1.0 / x);
    }
    printf(" the divisin of %d entered numbers is   %f   ", n, (float)divide);
}
int main(){
    division();
    return 0;
}