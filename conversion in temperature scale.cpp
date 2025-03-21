# include<stdio.h>
int main()
{
	float c,f,c1,f1;
	printf("enter the temperature in celcius");
	scanf("%f",&c);
	f1=(c*9/5)+32;
	printf("temperature in fehrenheit scale:%f\n",f1);
	printf("enter the temperature in fahrenheit");
	scanf("%f",&f);
	c1=(f-32)*5/9;
	printf("temperature in celcius scale:%f\n",c1);
	return 0;
}
