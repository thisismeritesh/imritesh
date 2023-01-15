#include <stdio.h>
#include <math.h>

int main()
{
    int n, i, j, start,end;
    scanf("%d", &n);
    int k=n;

    int a[2 * n - 1][2 * n - 1];
    start = 0;
    end=2*n-2;
    for (i = 0; i < 2 * n - 1; i++)
        for (j = 0; j < 2 * n - 1; j++)
            a[i][j] = 1;
while(n!=0)
    {
        for (i = start; i <= end; i++)
        {
            for (j = start; j <= end; j++)
            {
                if (i == start || j == start || i == end || j == end)
                {
                    a[i][j] = n;
                }
            }
        }
        ++start;
        --end;
        --n;

    }
        for (i = 0; i < 2 * k - 1; i++)
        {
            for (j = 0; j < 2 * k - 1; j++)
            {
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }
    

    return 0;
}