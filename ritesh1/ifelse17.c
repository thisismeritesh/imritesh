#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,root1,root2,d;
    printf("enter the values of a  b  and c");
    scanf("%f%f%f",&a,&b,&c);
    d=(b*b)-(4*a*c);
    root1=(-b+sqrt(d))/(2*a);
     root2=(-b-sqrt(d))/(2*a);
     if (d>=0)

     {
        /* code */printf("roots of the equation are%.2f   %.2f",root1,root2);
     }
     else
     {
       printf(" roots are imaginary");
     }
     
     

    
    

    
    return 0;
}