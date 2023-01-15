#include <stdio.h>
#include <string.h>
int main()
{
    char string1[25];
    char string2[25];
    fgets(string1, 25, stdin);
    fgets(string2, 25, stdin);
    int f = 0;
    int len1 = strlen(string1);
    int len2 = strlen(string2);
    if (len1 == len2)
    {
        for (int i = 0; i < len1; i++)
        {
            if (string1[i] != string2[i])
            {
                f = 1;
                break;
            }
        }
    }
    if (f == 1)
    {
        printf("not equal");
    }
    else
    {
        printf("equal");
    }

    return 0;
}