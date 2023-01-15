#include<stdio.h>

int main(){
    char word1[100];
    char word2[100];
    fgets(word1,100,stdin);
    int count=-1;
    for (int i = 0; word1[i]; i++)
    {
       word2[i]=word1[i];
        count++;
    }
    printf("%d is the count ",count);
for (int  i = 0; word2[i]; i++)
{
    printf("%c",word2[i]);
}
 for (int i = 0; word2[i]; i++)
    {
       if (i=='a'||i=='e'||i=='o'||i=='u'||i=='i')
       {
        printf("%c",word2[i]);
       }
       
        count++;
    }

    return 0;
}