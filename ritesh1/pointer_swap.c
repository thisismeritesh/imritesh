#include<stdio.h>
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;

}
int main(){
    int x,y;
    scanf("%d\t%d",&x,&y);
    swap(&x,&y);
    printf("%d\t%d",x,y);
     printf("%p\t%p",&x,&y);

    return 0;
}