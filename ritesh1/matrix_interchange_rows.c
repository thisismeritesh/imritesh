#include <stdio.h>
int main()
{
  int a[3][3];
  int temp[3][3], f, i, j;
  for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++)
      scanf("%d", &a[i][j]);
  printf("enter the rows and columns which you want to exchange");
  for (i = 0; i < 3; i++)
    for (j = 0; j < 3; j++)
      temp[i][j] = a[i][j];

      for (i = 0; i < 3; i++)
    for (j = 0; j < 3; j++)
       a[i][j]=temp[i][j];
}