# include<stdio.h>
int main()
{
	float p,r,t,si;
	printf("enter the principle amount");
	scanf("%f",&p);
	printf("enter the rete of interest");
	scanf("%f",&r);
	printf("enter the timr period");
	scanf("%f",&t);
	si=(p*r*t)/100;
	printf("simple interest is:%f",si);
	return 0;
}
