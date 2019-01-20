#include <stdio.h> 
#include <stdlib.h> 

#define NISW "Number is wrong" 

void from_2_to_8 (void); 
void from_10_to_8 (void); 
void from_16_to_8 (void); 

int get_int (char c); 

char ca_number[11]; 

int main (void){ 
int i_base; 
scanf("%d %s",&i_base, ca_number); 
printf("%d %s\n",i_base, ca_number); 


switch (i_base) { 
case 2: from_2_to_8(); break; 
case 10: from_10_to_8(); break; 
case 16: from_16_to_8(); break; 
default: printf("Base is wrong"); 
} 
getch(); 
return(0); 
} 

void from_2_to_8 (void) 
{ 
int i,j; 
int n = 0; // Кол-во цифр 

for (i = 0; i < 6 && ca_number[i]; i++){ 
if ((ca_number[i] < '0') || (ca_number[i] > '1'))
{                                               // Проверка введёного двоичного числа 
printf (NISW); 
return; 
} 
n++; 
} 
int add_simb = 3-n % 3; // Проверка дополненности троек разрядов 
if (add_simb < 3) n += add_simb; 
for (i = 0; i < add_simb && add_simb < 3; i++) 
{ 
for (j = i + n; j > i; j--) // Дополнение разрядов до кратного трём со сдвигом вправо 
{ 
ca_number[j] = ca_number[j - 1]; 
} 
ca_number[i] = '0'; 
} 

printf("0");// Вывод лидирующего нуля 
for (i = 0; i < n; i += 3)
{ 
int dig = ((ca_number[i]-'0') * 4 + (ca_number[i+1]-'0') * 2 + ca_number[i + 2]-'0'); 
printf("%d",dig); // Вывод по одной восьмеричной цифре 
} 
printf("\n");// Переход на новую строку 
} 

void from_10_to_8 (void) 
{ 
int i,j; 
int n = 0;    // Кол-во цифр 
int i_number; 
char * o_number;    // Восьмеричная строка 

for (i = 0; i < 6 && ca_number[i]; i++){ 
if ((ca_number[i] < '0') || (ca_number[i] > '9'))
{                                               //проверка введёного десятичного числа 
printf (NISW); 
return; 
} 
n++; 
} 
/* Здесь будет сама обработка */ 
i_number=ca_number[0]-'0'; 
for (i = 1; i < n; i++) {// Перевод строки в десятичное число 
i_number=i_number * 10+(ca_number[i]-'0'); 
} 

i = 0; 
while (i_number > 0) {// Последовательная запись остатков от деления исходного числа на 8 
ca_number[i]= i_number % 8; 
i_number/= 8; 
i++; 
} 
printf("0");// Вывод лидирующего нуля 
for (j = i-1; j >= 0; j--)
{ 
printf("%d",ca_number[j]);// Вывод по одной восьмеричной цифре сзади наперёд 
} 
printf("\n");// Переход на новую строку 
} 

void from_16_to_8 (void) 
{ 
int i,j; 
int n = 0; // Кол-во цифр 
int i_number; 

for (i = 0; i < 6 && ca_number[i]; i++){ 
if ((ca_number[i] >= '0' && ca_number[i] <= '9') || 
(ca_number[i] >= 'A' && ca_number[i] <= 'F') || 
(ca_number[i] >= 'a' && ca_number[i] <= 'f') ){ } // Проверка введёного шестнадцатиричного числа 
else { 
printf (NISW); 
return; 
} 
n++; 
} 
/* Здесь будет сама обработка */ 
i_number=get_int(ca_number[0]); // Перевод числа в 10 
for (i = 1; i < n; i++) { 
i_number= i_number * 16 + get_int(ca_number[i]); 
} 

i = 0; 
while (i_number > 0) {// Последовательная запись остатков от деления исходного числа на 8 
ca_number[i]= i_number % 8; 
i_number /= 8; 
i++; 
} 
printf("0");// Вывод лидирующего нуля 
for (j = i-1; j >= 0; j--)
{ 
printf("%d",ca_number[j]);// Вывод по одной восьмеричной цифре сзади наперёд 
} 
printf("\n");// Переход на новую строку 

} 

int get_int (char c) 
{ 
if (c <= '9') return c-'0'; 
else if (c <= 'F') return c-'A'+10; 
else return c-'a'+10; 
}
