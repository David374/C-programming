#include <stdio.h>
#include <stdlib.h>


int * print_rez();
int main() {
    int * pia_summ;
    pia_summ = print_rez();
    if (pia_summ) {
        for (int i = 0; pia_summ[i]; i++)
            printf("%5d", pia_summ[i]);
        free(pia_summ);
    }
    return 0;
}
 
int * print_rez() {
    int n;
    int * pia_source;
    int * pia_summ;
    int i_item = 1;
 
    scanf("%d", &n);
    printf("%d\n", n);
    if (n < 2 || n > 150) {
        printf("Number is wrong");
        return 0;
    }
    if (n % 2) {
        printf("Number is uneven");
        return 0;
    }
    pia_source = calloc(n, sizeof(int));
    for (int i = 0; i < n / 2; i++, i_item += 2) {
        pia_source[i] = i_item;
        pia_source[n - i - 1] = i_item + 1;
    }
    pia_summ = calloc(n / 2 + 1, sizeof(int));
 
 
    for (int i = 0; i < n / 2; i++)
    {
        pia_summ[i] = pia_source[i] + pia_source[n - i - 1];
    }
    free(pia_source);
    return pia_summ;
}
