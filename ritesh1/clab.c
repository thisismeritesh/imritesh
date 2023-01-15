#include<stdio.h>
int power(int a,int b);
int main(){
    int a,b;
    power(a,b);

    return 0;
}
int power(int a,int b)


{
    int x,n;
    int ans=1;
    printf("enter the number ");
    scanf("%d",&x);
    printf("enter the degree");
    scanf("%d",&n);
    for (int i = 0; i<n; i++)
    {
        ans *=x;


    }
    printf("%d",ans);
    return ans;
    


}