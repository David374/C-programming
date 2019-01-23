#include <stdio.h>
#include <stdlib.h>


int main()
{
    int rel = 0;
    scanf("%d", &rel);

    switch(rel)
    {
    case 1:
        printf("A");
        break;
    case 3:
    case 4:
        printf("B");
        break;
    case 7:
        printf("H");
        break;
    default:
        printf("E");
        break;
    }
    return (0);
}
