#include<stdio.h>
void table()
{
    int x, y, i;
    printf("enter the number of which the table will be printed\n");
    scanf("%d", &x);
    printf("enter a number to print how many terms will there be in the table  \n");
    scanf("%d", &y);

    for (int i = 1; i <= y; i++)
    {
        printf("  %d  X  %d  =  %d\n", x, i, i * x);
    }
}
int main(){
    table();
    return 0;
}