#include <stdio.h>
#include <stdlib.h>

// Write C code to convert a decimal number, n, to binary format. //

int main(){
	
	int number,digit,total=0,i=1,temp;
	
	printf("Enter a number: ");
	scanf("%d", &number);
	
	temp=number;
	
	while(number!=0)
	{
		digit = number % 2;
		
		number = number / 2;
		
		total = total + digit * i;
		
		i = i * 10;
	}
	printf("%d in binary format is: %d", temp,total);	
	
	return 0;
}
