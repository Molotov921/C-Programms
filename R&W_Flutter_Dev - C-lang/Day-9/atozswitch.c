/*wap to get A to Z characters from user and print a name starting with that character*/
#include<stdio.h>
void main() 
{
    char input;

    printf("Enter a character (A-Z) : ");
    scanf("%c",&input);

    switch(input) 
    {
        case 'a':
        case 'A':
            printf("Apple\n");
            break;
        case 'b':
        case 'B':
            printf("Banana\n");
            break;
        case 'c':
        case 'C':
            printf("Cherry\n");
            break;
        case 'd':
        case 'D':
            printf("Durian\n");
            break;
        case 'e':
        case 'E':
            printf("Elderberry\n");
            break;
        case 'f':
        case 'F':
            printf("Fig\n");
            break;
        case 'g':
        case 'G':
            printf("Grape\n");
            break;
        case 'h':
        case 'H':
            printf("Honeydew\n");
            break;
        case 'i':
        case 'I':
            printf("Imbe\n");
            break;
        case 'j':
        case 'J':
            printf("Jackfruit\n");
            break;
        case 'k':
        case 'K':
            printf("Kiwi\n");
            break;
        case 'l':
        case 'L':
            printf("Lemon\n");
            break;
        case 'm':
        case 'M':
            printf("Mango\n");
            break;
        case 'n':
        case 'N':
            printf("Nectarine\n");
            break;
        case 'o':
        case 'O':
            printf("Orange\n");
            break;
        case 'p':
        case 'P':
            printf("Papaya\n");
            break;
        case 'q':
        case 'Q':
            printf("Quince\n");
            break;
        case 'r':
        case 'R':
            printf("Raspberry\n");
            break;
        case 's':
        case 'S':
            printf("Strawberry\n");
            break;
        case 't':
        case 'T':
            printf("Tangerine\n");
            break;
        case 'u':
        case 'U':
            printf("Ugli fruit\n");
            break;
        case 'v':
        case 'V':
            printf("Vanilla bean\n");
            break;
        case 'w':
        case 'W':
            printf("Watermelon\n");
            break;
        case 'x':
        case 'X':
            printf("Xigua\n");
            break;
        case 'y':
        case 'Y':
            printf("Yellow passionfruit\n");
            break;
        case 'z':
        case 'Z':
            printf("Zebra fruit\n");
            break;
        default:
            printf("Invalid input\n");
            break;
    }
}