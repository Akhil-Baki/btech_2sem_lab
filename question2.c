#include<stdio.h>
void swap(int *a,int *b){
	int t = *a;
	*a=*b;
	*b=t;
}
int main(){
	int x,y;
	printf("enter the numbers");
	scanf("%d%d", &x,&y);
	swap(&x,&y);
	printf("the value of x is now : %d",x);
	printf("the value of y is now :%d",y);
	return 0;
}
