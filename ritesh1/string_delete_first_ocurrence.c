#include<stdio.h>
#include<string.h>
int main(){
     char a[100];
    fgets(a,100,stdin);
    printf("enter the element which you want to find ");
    char c1;
    int k=0;
    scanf("%c",&c1);
    for (int i = 0; a[i]; i++)
    {
        if (a[i]==c1)
        {
           for (int  k = i; a[k]; k++)
           {
            a[k]=a[k+1];
            

           }
           
            
        }break;
        
    }
    puts(a);
    return 0;
}