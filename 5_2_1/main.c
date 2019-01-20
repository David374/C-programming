#include <stdio.h>
#include <stdlib.h>


int main()
{
    char string_1[101] = {0}; // Обнуление символьного массива
    char string_2[101] = {0}; // Обнуление символьного массива
    int i; // Счётчик для for
    int x = 0; // Счётчик индекса, для второго массива
    int a;
    scanf("%s", string_1);
    printf("Before:%s\n", string_1);
    for(i = 0; string_1[i]; i++)
    {
        a = (char) string_1[i];
        if((a >= 48) && (a <= 57))
        {
          string_2[x] = string_1[i];
          x++;
        }
    }
        printf("after:%s", string_2);
    return 0;
}
