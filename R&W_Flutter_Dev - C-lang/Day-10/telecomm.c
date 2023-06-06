/*wap to perform nested switch case for telecommunication system*/
#include<stdio.h>
void main() 
{
    int option1,option2;

    printf("Welcome to the Telecommunication System\n");

    printf("Select a language :\n");
    printf("1. English\n");
    printf("2. Hindi\n");
    printf("3. Gujarati\n");
    scanf("%d",&option1);

    switch(option1) 
    {
        case 1:
            printf("English language selected\n");
            printf("Select an option :\n");
            printf("1. Mobile\n");
            printf("2. Landline\n");
            scanf("%d",&option2);

            switch(option2) 
            {
                case 1:
                    printf("Mobile selected\n");
                    printf("Select an option :\n");
                    printf("1. Prepaid\n");
                    printf("2. Postpaid\n");
                    scanf("%d",&option2);

                    switch(option2) 
                    {
                        case 1:
                            printf("Prepaid selected\n");
                            break;
                        case 2:
                            printf("Postpaid selected\n");
                            break;
                        default:
                            printf("Invalid option\n");
                            break;
                    }
                    break;

                case 2:
                    printf("Landline selected\n");
                    printf("Select an option:\n");
                    printf("1. Residential\n");
                    printf("2. Business\n");
                    scanf("%d",&option2);

                    switch(option2) 
                    {
                        case 1:
                            printf("Residential selected\n");
                            break;
                        case 2:
                            printf("Business selected\n");
                            break;
                        default:
                            printf("Invalid option\n");
                            break;
                    }
                    break;

                default:
                    printf("Invalid option\n");
                    break;
            }
            break;

        case 2:
            printf("Hindi language selected\n");
            printf("Select an option:\n");
            printf("1. Mobile\n");
            printf("2. Landline\n");
            scanf("%d",&option2);

            switch(option2) 
            {
                case 1:
                    printf("Mobile selected\n");
                    break;
                case 2:
                    printf("Landline selected\n");
                    break;
                default:
                    printf("Invalid option\n");
                    break;
            }
            break;

        case 3:
            printf("Gujarati language selected\n");
            printf("Select an option :\n");
            printf("1. Mobile\n");
            printf("2. Landline\n");
            scanf("%d",&option2);

            switch(option2) 
            {
                case 1:
                    printf("Mobile selected\n");
                    break;
                case 2:
                    printf("Landline selected\n");
                    break;
                default:
                    printf("Invalid option\n");
                    break;
            }
            break;

        default:
            printf("Invalid option\n");
            break;
    }
}