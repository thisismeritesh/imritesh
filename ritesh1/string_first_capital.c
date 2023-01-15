#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,100,stdin);
    for (int  i = 0; str[i]; i++)
    {
        if (str[i]==32)
        {
            str[i+1]=str[i+1]-32;
        }
        
    }
    if (str[0]>='a'&&str[0]<='z')
    {
        str[0]=str[0]-32;
    }
    
   for (int  i = 0; str[i]; i++)
   {
    printf("%c",str[i]);
   }
   
    return 0;
}