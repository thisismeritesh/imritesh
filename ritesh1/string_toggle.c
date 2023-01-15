#include<stdio.h>

int main(){
    char a[100];
    fgets(a,100,stdin);
    for (int  i = 0; a[i]; i++)
    {
        if (a[i]>=65&&a[i]<=90)
        {
             a[i]=a[i]+32;

        }
         else if (a[i]>=97&&a[i]<=122)
        {
             a[i]=a[i]-32;
             
        }
        
    }
    puts(a);
    
    return 0;
}