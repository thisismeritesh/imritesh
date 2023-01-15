#include<stdio.h>

int main(){
   int one,two, five, ten,twenty,fifty,hundred,twohundred,fivehundred,twothousand,amount;
   scanf("%d",&amount);
 twothousand=amount/2000;
 fivehundred=(amount%2000)/500;
   
  hundred=(amount%500)/100;
  fifty=(amount%100)/50;
    ten=(amount%50)/10;
    five=(amount%10)/5;
    two=(amount%5)/2;
    one=(amount%5)%2;
    printf("  number of two thousand is %d\n five hundred is %d\n  hundred is %d\n fifty is %d\n and ten is %d\n five is %d\n two is%d\n one is %d\n :  " ,twothousand,fivehundred,hundred,fifty,ten,five,two,one);
printf("total numbner of notes are%d",twothousand+fivehundred+hundred+fifty+ten+five+two+one);
    return 0;
}