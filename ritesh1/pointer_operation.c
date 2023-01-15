#include<stdio.h>
void operation(int x,int y,int *sum,int *diff,int *mul,int *div,int *avg)
{

*sum=(x)+(y);
*diff=(x)-(y);
*mul=(x)*(y);
*div=(x)/(y);
*avg=((x)+(y))/2;


}
int main(){
    int x,y;
    int sum,diff,mul,div,avg;
    scanf("%d/n",&x);
    scanf("%d/n",&y);
    operation(x,y,&sum,&diff,&mul,&div,&avg);
    printf("%d\n",sum);
printf("%d\n",diff);
printf("%d\n",mul);
printf("%d\n",div);
printf("%d\n",avg);


   
    return 0;
}