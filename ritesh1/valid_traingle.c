#include <stdio.h>

int main()
{
    int x, y, z;
    printf("enter the values of all 3 angles of traingle:");
    scanf("%d%d%d", &x, &y, &z);
    if (((x + y + z) == 180) && x != 0 && y != 0 && z != 0)

    {
        printf("the traingle is valid");
        /* code */
    }
    else

    {
        printf(" traingle will be invalid ");
    }

    return 0;
}