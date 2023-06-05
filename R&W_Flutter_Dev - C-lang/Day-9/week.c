/*wap to print week days*/
#include<stdio.h>
void main()
{
	char opt;

	printf("Enter your choice.../m/M/t/T/w/W/u/U/f/F/s/S/n/N = ");
	scanf("%c",&opt);

	switch(opt)
	{
		case'm':
		case'M':
			printf("Today is Monday...");
			break;
		case't':
		case'T':
			printf("Today is Tuesday...");
			break;
		case'w':
		case'W':
			printf("Today is Wdnesday...");
			break;
		case'u':
		case'U':
			printf("Today is Thursday...");
			break;
		case'f':
		case'F':
			printf("Today is Friday...");
			break;
		case's':
		case'S':
			printf("Today is Saturday...");
			break;
		case'n':
		case'N':
			printf("Today is Sunday...");
			break;
		default:
            printf("Wrong Input");
            break;								
	}
}