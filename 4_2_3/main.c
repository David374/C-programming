#include <stdio.h>
#include <stdlib.h>


int main()
{
    char b = 0;
    scanf("%c", &b);

    if((b >= 'a' && b <= 'z') || (b >= 'A' && b <= 'Z'))
    {
        if(b == 'a' || b == 'A'
        || b == 'e' || b == 'E'
        || b == 'i' || b == 'I'
        || b == 'o' || b == 'O'
        || b == 'u' || b == 'U'
        || b == 'y' || b == 'Y')
        {
            printf("vowel");
        }
        else
            printf("consonant");
    }
    else
        printf("Not letter");

    return 0;
}
