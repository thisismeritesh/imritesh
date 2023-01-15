#include <stdio.h>
void maximum(int *a, int *b, int *c)
{
    if (*a > *b && *b > *c)
    {
        printf("%d", *a);
    }
    if (*b > *c)
    {
        printf("%d",*b);

    }

    else
    {
        printf("%d",*c);
    }

    /* code */
}

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    maximum(&a,&b,&c);

    return 0;
}