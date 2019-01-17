#include <stdio.h>
#include <stdlib.h>


void From2(char* str, int base, int length);
void From8(char* str, int base, int length);
void From16(char* str, int base, int length);


int main() 
{
	int base;
	char str [11];
	int length = 0;
	scanf("%d %s", &base, str); // Ввод базиса и последовательности
	if(base != 2 && base != 8 && base != 16)
	{
    printf("%d %s\n", base, str);
		printf("Base is wrong.");
		exit(1);
	}
	for(int i = 0; i < 6; i ++)
	{
		if(str[i] != '\0')
			length++;
		else
			break;
	}
	if(base == 2) 
	{
		From2(str, base, length);
	}
	if(base == 16) 
	{
		From16(str, base, length);
	}
	return (0);
}

void From2(char* str, int base, int length)
{
	int result = 0;
	int b = 1;
	for(int i = length - 1; i >= 0; i--)
	{
		if(str[i] != '0' && str[i] != '1')
		{
      printf("%d %s\n", base, str);
			printf("Number is wrong.");
			exit(2);
		}
		int n = str[i] - '0';
		result += n * b;
		b *= 2;
	}
	printf("%d %s\n%d", base, str, result);
}


void From8(char* str, int base, int length)
{
	int result = 0;
	int b = 1;
	for(int i = length - 1; i >= 0; i--)
	{
		if(str[i] < '0' || str[i] > '7')
		{
      printf("%d %s\n", base, str);
			printf("Number is wrong.");
			exit(3);
		}
		int n = str[i] - '0';
		result += n * b;
		b *= 8;
	}
	printf("%d %s\n%d", base, str, result);
}

void From16(char* str, int base, int length)
{
	int result = 0;
	int b = 1;
	for(int i = length - 1; i >= 0; i--)
	{
		if((str[i] >= '0' && str[i] <= '9') || ((str[i] >= 'A' && str[i] <= 'F') || (str[i] >= 'a' && str[i] <= 'f')))
		{
			int n;
			if(str[i] <= '9')
				n = str[i] - '0';
			else if(str[i] <= 'F')
				n = str[i] - 'A' + 10;
        else if(str[i] <= 'f')
				n = str[i] - 'a' + 10;
			result += n * b;
			b *= 16;
		}
		else
		{
      printf("%d %s\n", base, str);
			printf("Number is wrong.");
			exit(4);
		}
	}
	printf("%d %s\n%d", base, str, result);
}
