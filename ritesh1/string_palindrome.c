#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    fgets(a, 100, stdin);
    int f = 0;
    int k = strlen(a);

    for (int i = 0;i<k-1; i++)
    {
        if (a[i] != a[k - i  -2])
        {
            f = 1;
            break;
        }
    }
    if (f == 1)
    {
        printf("not a palindrome ");
    }
    else
    {
        printf("palindrome ");
    }

    return 0;
}