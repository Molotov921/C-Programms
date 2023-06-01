/*wap to perform arithmatic operation*/
#include<stdio.h>
void main()
{
	int a,b,c;

	printf("\nEnter the first value = ");
	scanf("%d",&a);
	printf("\nEnter the second value = ");
	scanf("%d",&b);

	c=a+b;
	printf("\nsum of values = %d",c);

	c=a-b;
	printf("\nsub of values = %d",c);

	c=a*b;
	printf("\nmulti of values = %d",c);

	c=a/b;
	printf("\ndivi of values = %d",c);

	c=a%b;
	printf("\nmodular of values = %d",c);
}