
#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,*aa,*bb,swap();

	clrscr();

	a=5;
	b=10;

	aa=&a;
	bb=&b;

	printf("Value of a=%d & value of b=%d before swap",a,b);

	swap(aa,bb);

	printf("\nValue of a=%d & b=%d after swap",a,b);

	getch();
}

int swap(int *x, int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
