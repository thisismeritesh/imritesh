#include <stdio.h>
#include <ctype.h>
int main()
{
    char name[500];
    fgets(name, 500, stdin);
    puts(name);
    int count1 = 0;
    int count2 = 0;
    int count0 = 0;

    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u')
        {
            printf("%c\t", name[i]);
            count1++;
        }
        if (isspace(name[i]))
        {
            /* code */ count0++;
        }
    }
    printf("\n");
    for (int i = 0; name[i] != '\0'; i++)
    {
        count2++;
    }
    printf("\n");
    printf(" total number of vovels are %d", count1);
    printf("\n");
    printf("total number of alphabets are  %d", count2 - count0);

    return 0;
}