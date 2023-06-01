/*wap to perform logical operation*/
#include<stdio.h>
void main()
{	
	int a,b,c;

	printf("\nEnter first value: ");
	scanf("%d",&a);
	printf("\nEnter second value: ");
	scanf("%d",&b);
	printf("\nEnter third value: ");
	scanf("%d",&c);

	printf("%d",a<b && a<c);
	printf("\n%d",b<a && b<c);
	printf("\n%d",c<a && c<b);

	printf("\n%d",a<b || a<c);
	printf("\n%d",b<a || b<c);
	printf("\n%d",c<a || c<b);

}