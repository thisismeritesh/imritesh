#include <stdio.h>

int main()
{
  char a[100];
  fgets(a, 100, stdin);
  int c1, c2, c3, c4;
  c1 = 0;
  c2 = 0;
  c3 = 0;
  c4 = 0;
  int c5 = 0;
  for (int i = 0; a[i]; i++)
  {
    if (a[i] == 32)
    {
      ++c1;
    }
    else if (a[i] >= 65 && a[i] <= 90)
    {
      ++c2;
    }
    else if (a[i] >= 97 && a[i] <= 122)
    {
      ++c3;
    }
    else if (a[i] >= 48 && a[i] <= 57)
    {
      ++c5;
    }
    else
    {
      ++c4;
    }
  }
  printf("the total number of spaces are %d\n", c1);
  printf("the total number of upper case  are %d\n", c2);
  printf("the total number of lower case are %d\n", c3);
  printf("the total number of decimal digits  are %d\n", c5);
  printf("the total number of special characters   are %d\n", c4);

  return 0;
}