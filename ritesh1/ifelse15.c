#include<stdio.h>

int main(){
    int x,y,z;
    printf("enter the value of the three side of traingle  ");
    scanf("%d%d%d",&x,&y,&z);
    if ((x+y)>z&&(y+z)>x&&(z+x)>y)
    {
        /* code */printf("traingle is valid");
        }


else
        {printf("traingle is invalid");
            /* code */
        }
        
    
        
    return 0;
}