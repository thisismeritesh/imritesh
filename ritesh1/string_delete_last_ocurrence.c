#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    fgets(a,100,stdin);
    char c1;
    scanf("%c",&c1); 
    int j;
     for (int  i = 0; a[i]; i++)
     {
        if (a[i]==c1)
        {
            /* code */j=i;
        }
        
     }
   for (int  i = j; a[i]; i++)
   {
    a[i]=a[i+1];
   }
   puts(a);
     
    return 0;
}