/*wap to get characters from user like A to Z and in output give the name use that characters*/
#include <stdio.h>
void main() 
{
    char input;

    printf("Enter a character (A-Z): ");
    scanf("%c", &input);

    if (input == 'a' || input == 'A') {
        printf("Apple\n");
    }
    else if (input == 'b' || input == 'B') {
        printf("Banana\n");
    }
    else if (input == 'c' || input == 'C') {
        printf("Cherry\n");
    }
    else if (input == 'd' || input == 'D') {
        printf("Durian\n");
    }
    else if (input == 'e' || input == 'E') {
        printf("Elderberry\n");
    }
    else if (input == 'f' || input == 'F') {
        printf("Fig\n");
    }
    else if (input == 'g' || input == 'G') {
        printf("Grape\n");
    }
    else if (input == 'h' || input == 'H') {
        printf("Honeydew\n");
    }
    else if (input == 'i' || input == 'I') {
        printf("Imbe\n");
    }
    else if (input == 'j' || input == 'J') {
        printf("Jackfruit\n");
    }
    else if (input == 'k' || input == 'K') {
        printf("Kiwi\n");
    }
    else if (input == 'l' || input == 'L') {
        printf("Lemon\n");
    }
    else if (input == 'm' || input == 'M') {
        printf("Mango\n");
    }
    else if (input == 'n' || input == 'N') {
        printf("Nectarine\n");
    }
    else if (input == 'o' || input == 'O') {
        printf("Orange\n");
    }
    else if (input == 'p' || input == 'P') {
        printf("Papaya\n");
    }
    else if (input == 'q' || input == 'Q') {
        printf("Quince\n");
    }
    else if (input == 'r' || input == 'R') {
        printf("Raspberry\n");
    }
    else if (input == 's' || input == 'S') {
        printf("Strawberry\n");
    }
    else if (input == 't' || input == 'T') {
        printf("Tangerine\n");
    }
    else if (input == 'u' || input == 'U') {
        printf("Ugli fruit\n");
    }
    else if (input == 'v' || input == 'V') {
        printf("Vanilla bean\n");
    }
    else if (input == 'w' || input == 'W') {
        printf("Watermelon\n");
    }
    else if (input == 'x' || input == 'X') {
        printf("Xigua\n");
    }
    else if (input == 'y' || input == 'Y') {
        printf("Yellow passionfruit\n");
    }
    else if (input == 'z' || input == 'Z') {
        printf("Zebra fruit\n");
    }
    else {
        printf("Invalid input.\n");
    }
}