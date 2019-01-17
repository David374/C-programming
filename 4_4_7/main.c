#include <stdio.h>
#include <stdlib.h>

int main()
{
  short int N, endline, ToEndline;
  endline = 1;
  ToEndline = 1;
  scanf("%d", &N);
  if((N < 1) || (N > 9))
  {
  	printf("N is wrong: %d", N);
  	exit;
  }
  else
  	while(endline <= N)
  	{
  		while(ToEndline < endline)
  		{
  			if(ToEndline != 0 && ToEndline != endline + 1)
  				printf(" ");
  			ToEndline++;
  			printf("%d", ToEndline);
  		}
  		if(N != endline)
  		{
  			printf("\n");
  		}
  		ToEndline = 0;
  		endline++;
  	}

  	return (0);
}
