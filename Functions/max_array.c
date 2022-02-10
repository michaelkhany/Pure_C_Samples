#include<stdio.h>
#include<conio.h>

void main()
{
	int a[5],max,i;

	clrscr();

	printf("Enter element for the array: ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=1;i<5;i++)
	{
	if(max<a[i])
	max=a[i];
	}
	printf("maximum number=%d",max);

	getch();
}
