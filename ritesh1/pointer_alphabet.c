#include <stdio.h>
void alphabet( int *n)
{

    for (int i = 0; i < *n; i++)
    {
        printf("%c", i+65);
    }
}
int main()
{ int n;
scanf("%d",&n);
    alphabet(&n);

    return 0;
}