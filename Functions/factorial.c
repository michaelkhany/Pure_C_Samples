#include <stdio.h>
#include <stdlib.h>

// Write C code for computing factorial N (N!). //

int main()
{
	int N;
	int sum=1;
	int i;
	
	printf("write a number, N: ");
	scanf("%d", &N);
	
	for(i=1; i<=N; i++)
	{
		sum= sum * i;
	}	
	printf("%d! = %d", N,sum);	
	return 0;
}
