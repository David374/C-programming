#include <stdio.h>
#include <stdlib.h>


int main()
{
    long long int k;
    int sum = 0;
    scanf("%lld", &k);
    if((0 < k) && (k < 10))
    {
        printf("Number of digits:%d", sum + 1);
    }
    else
    {
        while (k != 0) 
        {
            k = k / 10;
            sum++;
        }
        printf("Number of digits:%d", sum);
    }
    return 0;
}
