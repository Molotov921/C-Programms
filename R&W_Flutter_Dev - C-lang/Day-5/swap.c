/*wap to swap two numbers*/
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter the value a = ");
	scanf("%d",&a);
	printf("Enter the value b = ");
	scanf("%d",&b);

	c=a;
	a=b;
	b=c;
	printf("The value of a = %d\n",a);
	printf("The value of b = %d\n",b);
}