#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    fgets(a, 100, stdin);
    char c1, c2;
    printf("enter which character's first  you want to replace ");
    scanf("%c", &c1);
    printf("enter the new charcter which will replace the the repeated charcter first occurrance\n ");
    scanf("\n%c", &c2);
    int k = strlen(a);
    for (int i = 0; i < k - 1; i++)
    {
        /* code */ if (c1 == a[i])
        {
            /* code */ a[i] = c2;
            break;
        }
    }
    puts(a);
    return 0;
}