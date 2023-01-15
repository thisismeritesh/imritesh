#include<stdio.h>
#include<math.h>
void quadratic_roots()
{

    float a, b, c, root1, root2, d;
    printf("enter the values of a  b  and c");
    scanf("%f%f%f", &a, &b, &c);
    d = (b * b) - (4 * a * c);
    root1 = (-b + sqrt(d)) / (2 * a);
    root2 = (-b - sqrt(d)) / (2 * a);
    if (d >= 0)

    {
        printf("roots of the equation are%.2f   %.2f", root1, root2);
    }
    else
    {
        printf(" roots are imaginary");
    }
}
int main(){
    quadratic_roots();
    return 0;
}