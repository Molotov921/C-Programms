/*wap with logic if statement*/
#include<stdio.h>
void main()
{
	int a,b,c;

	printf("Enter a = ");
	scanf("%d",&a);
	printf("Enter b = ");
	scanf("%d",&b);
	printf("Enter c = ");
	scanf("%d",&c);

	if(a>b && a>c)
	{
		printf(" a is bigger");
	}
	else if(b>a && b>c)
	{
		printf(" b is bigger");
	}
	else
	{
		printf(" c is bigger");
	}
}