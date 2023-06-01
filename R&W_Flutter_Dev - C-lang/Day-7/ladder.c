/*wap for if else ladder statement*/
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

	if(a>b)
	{
		printf(" a is bigger");
	}
	else if(b>c)
	{
		printf(" b is bigger");
	}
	else
	{
		printf(" c is bigger");
	}
}