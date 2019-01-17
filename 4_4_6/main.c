#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i = 0;
  int s = 0;
  do
  {
  	scanf("%d", &i);
  	if(i > 0 && s == 0)
  		printf("%d", i);
  	if(i > 0 && s != 0)
  		printf(" %d", i);
  	if (i > 0)
  		s++;
  } while (i != 0);
  	return (0);
}
