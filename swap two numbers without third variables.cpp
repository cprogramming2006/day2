#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the first number");
	scanf("%d",&a);
	printf("enter the second number");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("the first number is:%d\n",a);
	printf("the second number is:%d\n",b);
	return 0;
	}
