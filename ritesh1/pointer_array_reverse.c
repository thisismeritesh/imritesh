#include <stdio.h>
void array(int *n)
{
    int a[*n];
    for (int i = 0; i < *n; i++)
    {
        /* code */ scanf("%d", &a[i]);
    }

    for (int i = *n - 1; i >= 0; i--)
    {
        printf("%d", a[i]);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    array(&n);

    return 0;
}