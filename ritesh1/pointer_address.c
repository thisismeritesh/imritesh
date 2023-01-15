#include<stdio.h>
void address(int *n)
{
    printf("%p",n);
    // jab humne main kr adddres   function me addres of n  diya  tab vo jaake adrtess function ke pointer (*n) me store ho gya isliye jab humne 
    // printf n kiya to main ke n ka addres print hua   
}
int main(){
    int n=4;
    printf("%p\n",&n);
address(&n);
    return 0;
}