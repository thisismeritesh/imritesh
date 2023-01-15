#include<stdio.h>
 void binary()
 {
 int n,x;
    int  a[1000];
    int count=0;
     printf("ebetr the number");
    scanf("%d",&n);
    x=n;
    for(int i=0;i<1000;i++)
    {
      a[i]=n%2;
       n=n/2;
       count++;
       if (n==0)
       {
        break;
       }
       
    }
    for (int i = 0; i < count; i++)
    {
        printf("%d",a[count-i-1]);

    }
 }
 void ternary()
 {
     int n,x;
    int  a[1000];
    int count=0;
    printf("ebetr the number");
    scanf("%d",&n);
    x=n;
    for(int i=0;i<1000;i++)
    {
      a[i]=n%3;
       n=n/3;
       count++;
       if (n==0)
       {
        break;
       }
       
    }
    for (int i = 0; i < count; i++)
    {
        printf("%d",a[count-i-1]);

    }
 }

int main(){
   ternary();
   printf("\n");
   binary();
    
    return 0;
}