#include <stdio.h>

void main()
{
    char ch;
    printf("Enter character ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z')
    {
        printf("Character entered is a small alphabet");
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("Character entered is a capital alphabet");
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("Character entered is a number");
    }
    else
    {
        printf("Character entered is a special character");
    }
}