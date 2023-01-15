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
            printf(" the first occurrence of %c is  %d\n",c1,i+1);
            
            break;
            
        }
        
    }
    return 0;
}