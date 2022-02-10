#include <stdio.h>
#include <stdlib.h>

// Write C code to count number of digits in a number. // 

int main(){
	
	int n,temp,i,a;
	
	printf("enter a number: ");
	scanf("%d", &n);
	temp=n;
	a=0;
	
	while(n!=0)
	{
		i = n % 10;
		n = (n - i)/10;
		a++;
	}		
	printf("%d has %d digits\n", temp,a);
	return 0;
}
