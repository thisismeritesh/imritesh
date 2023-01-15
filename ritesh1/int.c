#include<stdio.h>
void perfect(int n)
{
int i,t,sum;
t = n;
sum=0;
for(i=1;i<n;i++)
{
	if(n%i==0)
	{
	sum = sum+i;
}
}
if (sum==n){
printf("perfect no");
}
else
{
printf("no");
}

}
int main()
{
int n,c;
printf("enter number\n");
	scanf("%d",&n);
	 perfect(n);
	
return 0;
}