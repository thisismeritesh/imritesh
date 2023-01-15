#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    fgets(str, 100, stdin);
    int len;
    len = strlen(str);
    printf("%d\n", len);
    for (int i = 0; i <= len; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32; // this will change upper case to lower case
        }

        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32; // this will change lower case to lupper case
        }
    }
    for (int i = 0; i < len; i++)
    {
        printf("%c", str[i]);
    }

    return 0;
}