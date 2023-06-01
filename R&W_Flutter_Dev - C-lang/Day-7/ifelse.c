/*wap for if else statement*/
#include<stdio.h>
void main()
{
	int age;

	printf("Enter age = ");
	scanf("%d",&age);

	if(age>=18)
	{
		printf("you can vote");
	}
	else
	{
		printf("wait until you're 18");
	}
}