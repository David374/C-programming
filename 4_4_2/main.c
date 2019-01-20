#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i = 0;
    int n;
    int sum_n = 0;
    scanf("%d", &n);
    if(n > 0)
    {
        while (i <= n)
        {
            sum_n += i;
            i++;
        }
        printf("Sum_n = %d", sum_n);
    }
    else
        printf("n is wrong (%d)", n);
    return 0;
}
