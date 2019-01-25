#include <stdio.h>
#include <stdlib.h>

struct string{
    int base;
    char str[11];
    int length;
};

enum sys{BIN = 2, OCT = 8, DEC = 10};

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

int power(int n, int rate)
{
    int val = n;
    if (rate != 0)
    {
        for(; rate > 1; rate--)
            n *= val;
        return n;
    }
    else
        return 1;
}

int in_dec(const struct string* str)
{
    int sum = 0;
    for(int i = str->length - 1, j = 0; i >= j; i--)
    {
        if(str->str[i] >= 'A' && str->str[i] <= 'F')
            sum += ((int) str->str[i] - 55) * power(str->base, str->length - (i + 1));
        else if(str->str[i] >= 'a' && str->str[i] <= 'f')
            sum += ((int) str->str[i] - 87) * power(str->base, str->length - (i + 1));
        else
            sum += ((int) str->str[i] - '0') * power(str->base, str->length - (i + 1));
    }
    return sum;
}

int from_bin(const struct string* s)
{
    return !printf("%d %s\n%X", s->base, s->str, in_dec(s));
}

int from_oct(const struct string* s)
{
    return !printf("%d %s\n%X", s->base, s->str, in_dec(s));
}

int from_dec(const struct string* s)
{
    return !printf("%d %s\n%X", s->base, s->str, in_dec(s));
}

int validation(const struct string* s)
{
    const char msg_err_num[] = {"Number is wrong."};
    const char msg_err_bas[] = {"Base is wrong."};

    switch(s->base)
    {
    case BIN:
        for(int i = 0; i < s->length; ++i)
        {
            if(s->str[i] < '0' || s->str[i] > '1')
            {
                printf("%d %s\n", s->base, s->str);
                return printf("%s", msg_err_num);
            }
        }
        from_bin(s);
        return 0;
    case OCT:
        for(int i = 0; i < s->length; ++i)
        {
            if(s->str[i] < '0' || s->str[i] > '7')
            {
                printf("%d %s\n", s->base, s->str);
                return printf("%s", msg_err_num);
            }
        }
        return from_oct(s);
    case DEC:
        for(int i = 0; i < s->length; i++)
        {
            if(s->str[i] < '0' || s->str[i] > '9')
            {
                printf("%d %s\n", s->base, s->str);
                return printf("%s", msg_err_num);
            }
        }
        return from_dec(s);
    default:
        printf("%d %s\n", s->base, s->str);
        return printf("%s", msg_err_bas);
    }
}

int main()
{
    struct string *s = get_str();
      return validation(s);
}
