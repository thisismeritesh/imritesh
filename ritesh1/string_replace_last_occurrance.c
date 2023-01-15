#include <stdio.h>

int main()
{
    char a[100];
    fgets(a, 100, stdin);
    char c1, c2;
    int j;
    scanf("%c\n%c", &c1, &c2);
    for (int i = 0; a[i]; i++)
    {
        if (a[i] == c1)
        {
            j = i;
        }
    }
    a[j] = c2;
   puts(a);
    return 0;
}