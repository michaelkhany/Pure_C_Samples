#include <stdio.h>
#include <stdio.h>

// Write C code to check whether a number is palindrome or not. //

int main(){
	
	int n;
	int reversNumber;
	int temp;
	
	printf("Write a number: ");
	scanf("%d", &n);
	temp=n;
	
	while(n!=0)
	{
		reversNumber = reversNumber * 10;
		reversNumber = reversNumber + (n % 10);
		n = n / 10;
	}
	
	if(temp==reversNumber)
	{
		printf("%d is polindrome number.", temp);
	}
	else
	{
		printf("%d is not polindrome number.", temp);
	}
	return 0;
}
