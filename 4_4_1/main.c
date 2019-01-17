#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i;
  int k;
  for(i = 1; i <= 9; i++)
  {
  	for(k = 1; k <= 9; k++)
  	{
  		printf("%4d", k * i);
  	}
  	if(i != 9)
  		printf("\n");
  }
  	return (0);
}
