#include <stdio.h>
#include <string.h>
int main()
{
    char name[100];
    printf("enter the string ");
    fgets(name, 100, stdin);
    int n = strlen(name) - 1;
    char a[2 * n - 1][2 * n - 1];
    int start = 0, end = 2 * n - 2;

    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            a[i][j] = 'a';
        }
    }
    int i = 0;
    while (name[i] != '\0')
    {
        for (int j = start; j <= end; j++)
        {
            for (int l = start; l <= end; l++)
            {
                if (j == start || j == end || l == start || l == end)
                {
                    a[j][l] = name[i];
                }
            }
        }
        ++start;
        --end;
        ++i;
    }

    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            printf("%c ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}