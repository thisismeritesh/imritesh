#include<stdio.h>
void abc(int a[],int b[],int n)
{
    for(int i=0;i<n;i++)
    {
        b[i]=a[i];
    }
}
int main()
{
    int a[10];int b[10],i;
    for(int i=0;i<10;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<10;i++)
    scanf("%d",&b[i]);
    abc(a,b,10);
    for(int i=0;i<10;i++)
    {
        printf("%d ",b[i]);
    }
}