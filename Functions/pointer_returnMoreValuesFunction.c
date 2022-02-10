#include<stdio.h>
#include<conio.h>

void main()
{
    int x,y,add,sub,change(int*,int*,int*,int*);

    printf("Enter values of X and Y:");
    scanf("%d %d",&x,&y);
    change(&x, &y, &add, &sub);
    printf("Addition: %d",add);
    printf("Subtration: %d",sub);

}

int change(int *a, int *b, int *c, int *d)
{
    *c=*a+*b;
    *d=*a-*b;
}
