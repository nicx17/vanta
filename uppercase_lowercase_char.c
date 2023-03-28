#include <stdio.h>
void main()
{
    char ch;

    printf("Enter character");

    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("Character is a capital alphabet");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("Character is a small alphabet");
    }
    else
    {
        printf("Character is not an alphabet");
    }
}