#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rel = 0;
    int count = 0;
    int count_d = 0;

    while(rel != -9999)
    {
        scanf("%d", &rel);

        count++;

        if(rel > 0)
        {
            count_d++;
        }
    }

    if(count - 1 == count_d)
        printf("YES");
    else
        printf("NO");

    return (0);
}
