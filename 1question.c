#include<stdio.h>
void power (int * ,int *);
int main ()
{
	int a,b;
	printf("enter the number");
	scanf("%d",&a);
	printf("enter the power");
	scanf("%d",&b);
	power(&a,&b);
}
void power(int *x, int *y)
{
	int A=1, i;
	for(i=1;i<=*y;i++)
	{
		A=A*(*x);
		
	}
	printf("the %d power of %d is %d",y,x,A );
	
}
