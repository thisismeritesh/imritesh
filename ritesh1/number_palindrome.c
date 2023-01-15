#include<stdio.h>

int main(){
      int x, n, sum=0,digit,f;
    printf("enter the value of number ");
    scanf("%d", &n);
    x = n;
    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        n = n / 10;

        count++;
        if(n==0)
        break;
    }
    int a[count];
    int b[count];
    for (int i = 0; i < count; i++)
    {
         digit = x % 10;
         a[i]=digit;
          x = x / 10;
          b[count-i-1]=a[i];
          
          
    } 
    for (int i = 0; i < count; i++)
    {
        if (a[i]!=b[i])
        {
            f=1;
            break;
        }
        
    }
    printf("%d",count);
     if (f==1)
    {
        printf("not a palindrome number ");
    }
    else
    {
        printf("a palindrome  number");

    }
     for (int i = 0; i < count; i++)
    {
  printf("%d",a[count]);
        
    }
    printf("\n");
     for (int i = 0; i < count; i++)
    {
        
          printf("%d",b[count]);
    }
    
    

    
    



    return 0;
}