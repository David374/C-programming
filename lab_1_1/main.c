#include <stdio.h>
#include <stdlib.h>
struct string{
    int base;
    char str[11];
    int length;
};

enum sys{BIN = 2, OCT = 8, DEC = 10, HEX = 16};

int power(int n, int rate)
{
    int val = n;

    if (rate != 0)
    {
        for(; rate > 1; rate--)
        {
            n *= val;
        }
        return n;
    }
    else
        return 1;
}

unsigned int in_dec(struct string* str)
{
    unsigned int sum = 0;

    for(int i = str->length - 1, j = 0; i >= j; i--)
    {
        if(str->str[i] >= 'A' && str->str[i] <= 'F')
        {
            sum += ((int) str->str[i] - 55) * power(str->base, str->length - (i + 1));
        }
        else if(str->str[i] >= 'a' && str->str[i] <= 'f')
        {
            sum += ((int) str->str[i] - 87) * power(str->base, str->length - (i + 1));
        }
        else
        {
            sum += ((int) str->str[i] - '0') * power(str->base, str->length - (i + 1));
        }
    }
    return sum * 2;
}

struct string* get_str()
{
    unsigned int count = 0;
    static struct string s;
    scanf("%d%s", &s.base, s.str);
    for(int i = 0; s.str[i] != '\0' && i < 6; ++i)
        count++;
    s.length = count;
    return &s;
}

int validation(struct string* s)
{
    const char msg_err_num[] = {"Number is wrong."};
    const char msg_err_bas[] = {"Base is wrong."};

    switch(s->base)
    {
    case OCT:
        for(int i = 0; i < s->length; ++i)
        {
            if(s->str[i] < '0' || s->str[i] > '7')
            {
                printf("%d %s\n", s->base, s->str);
                printf("%s", msg_err_num);
                return 1;
            }
        }
        return s->base;
    case DEC:
        for(int i = 0; i < s->length; ++i)
        {
            if(s->str[i] < '0' || s->str[i] > '9')
            {
                printf("%d %s\n", s->base, s->str);
                printf("%s", msg_err_num);
                return 1;
            }
        }
        return s->base;
    case HEX:
        for(int i = 0; i < s->length; ++i)
        {
            if(s->str[i] < '0' || (s->str[i] > '9' && s->str[i] < 'A') || s->str[i] > 'F')
            {
                if(s->str[i] < '0' || (s->str[i] > '9' && s->str[i] < 'a') || s->str[i] > 'f')
                {
                    printf("%d %s\n", s->base, s->str);
                    printf("%s", msg_err_num);
                    return 1;
                }
            }
        }
        return s->base;
    default:
        printf("%d %s\n", s->base, s->str);
        printf("%s", msg_err_bas);
        return 1;
    }
}

int from_oct(int value)
{
    if(value > 1)
    {
        printf("%d", from_oct(value / BIN));
        return value % BIN;
    }
    else if(value == 1)
        return 1;
    else
        return 0;
}

int from_dec(int value)
{
    if(value > 1)
    {
        printf("%d", from_oct(value / BIN));
        return value % BIN;
    }
    else if(value == 1)
        return 1;
    else
        return 0;
}

int from_hex(int value)
{
    if(value > 1)
    {
        printf("%d", from_oct(value / BIN));
        return value % BIN;
    }
    else if(value == 1)
        return 1;
    else
        return 0;
}

int print_str(struct string* s)
{
    switch(validation(s))
    {
    case OCT:
        from_oct(in_dec(s));
        break;
    case DEC:
        from_dec(in_dec(s));
        break;
    case HEX:
        from_hex(in_dec(s));
        break;
    default:
        break;
    }
    return 0;
}

int main()
{
    struct string *s = get_str();
    return print_str(s);
}

