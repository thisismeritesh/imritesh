#include<stdio.h>

int main(){
    char a[100];
     fgets(a,100,stdin);
     printf("enter the charcter which you want to find  ");
     char k;
     char p1=k;
     int j=0;
     int r;
     static int e;
     scanf("%c",&p1);
     for (int i = 0; a[i]; i++)
     {    
        if (p1==a[i])
        { 
              
              r=1+i;
        }
        
     }
     
     printf("the last occurance of letter is %c  id %d ",p1,r);
     


return 0;
}