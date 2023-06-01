/*wap to get 5 values from user and find max numbers*/
#include<stdio.h>
void main()
{
	int a,b,c,d,e;

	printf("Enter the value a = ");
	scanf("%d",&a);
	printf("Enter the value b = ");
	scanf("%d",&b);
	printf("Enter the value c = ");
	scanf("%d",&c);
	printf("Enter the value d = ");
	scanf("%d",&d);
	printf("Enter the value e = ");
	scanf("%d",&e);

	if(a>b && a>c && a>d && a>e)
	{
		printf("A is Max\n");
	}
	else if(b>a && b>c && b>d && b>e)
	{
		printf("B is Max\n");
	}
	else if(c>b && c>b && c>d && c>e)
	{
		printf("C is Max\n");
	}
	else if(d>a && d>b && d>c && d>e)
	{
		printf("D is Max\n");
	}
	else
	{
		printf("E is Max\n");
	}
}