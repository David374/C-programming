#include <stdio.h>
#include <stdlib.h>


int main()
{
	int n;
	long int i;
	long long int factorial = 1;
	scanf("%d", &n);
	if(n < 0)
	{
		printf("Number is wrong.");
	}
	else
	{
		for(i = 1; i <= n; i++)
			factorial *= i;
		printf("factorial: %d = %lld", n, factorial);
	}
	return (0);
}
