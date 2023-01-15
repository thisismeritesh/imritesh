#include<stdio.h>

int main(){
      char a[100];
    fgets(a,100,stdin);
    printf("enter the element which you want to find ");
    char c1,c2;
    int k=0;
    scanf("%c\n%c",&c1,&c2);
    for (int i = 0; a[i]; i++)
    {
        if (a[i]==c1)
        {
           
           {
            a[i]=c2;
            

           }
           
            
        }
        
    }
    puts(a);
    return 0;
}