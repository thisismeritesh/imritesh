#include <stdio.h>

int main()
{
    int x, y, z;

    printf("enter the value of the three side of traingle  ");
    scanf("%d%d%d", &x, &y, &z);
    if ((((x == y) && (x != z) && (y != z)) ||
         ((y == z) && (y != x) && (z != x)) ||
         ((z == x) && (z != y) && (x != y))) &&
        ((x + y) > z && (y + z) > x && (z + x) > y))

    {
        printf("traingle is isosceles");
    }
    else
    {

        if (((x != y) && (y != z) && (z != x)) && ((x + y) > z && (y + z) > x && (z + x) > y))
        {
            /* code */ printf("traingle is scalene");
        }
        else
        {
            if (((x == y) && (y == z) && (z == x) && ((x + y) > z && (y + z) > x && (z + x) > y)))
            {
                printf("traingle is equilateral");
            }
            else
            {
                (((x < 0) || (y < 0) || (z < 0)) || ((x + y) == z) || ((y + z) == x) || ((z + x) == y));
                printf("traingle is invalid");
            }
        }
    }
    return 0;
}