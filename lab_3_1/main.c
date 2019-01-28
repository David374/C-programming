#include <stdio.h>
#include <stdlib.h>

union un{
    unsigned char ch[20];
    unsigned short ush[10];
};

int main()
{
    unsigned int value = 0;
    union un new_un;

    for(int i = 0; i < 20; i++)
    {
        scanf("%X", &value);

        printf("%.2X", value);

        if(i < 20 - 1)
            printf(" ");

        if(i % 2)
            new_un.ch[i - 1] = (char)value;
        else
            new_un.ch[i + 1] = (char)value;
    }

    printf("\n");

    for(int i = 0; i < 10; i++)
        printf("%8u", new_un.ush[i]);

    return (0);
}

