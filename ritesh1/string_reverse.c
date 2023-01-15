#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,100,stdin);
    int len=strlen(str);
       char temp;
    for (int  i = 0;i< len/2; i++)
    {
       temp=str[i];
       str[i]=str[len-2-i];
       str[len-2-i]=temp;

    }
    puts(str)
;
    return 0;
}