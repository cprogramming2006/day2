# include <stdio.h>
int main()
{
	int a,b,c;
	printf("enter the first number:");
	scanf("%d",&a);
	printf("enter the second number:");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("the first number is:%d\n",a);
	printf("the second number is:%d\n",b);
	return 0;
	}
