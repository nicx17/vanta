#include <stdio.h>
void main()

{
    char vo;
    printf("Enter alphabet ");
    scanf("%c", &vo);

    if (vo == 'a' || vo == 'A' || vo == 'e' || vo == 'E' || vo == 'i' || vo == 'I' || vo == 'o' || vo == 'O' || vo == 'u' || vo == 'U')
    {
        printf("Entered albhabet is a vowel");
    }
    else
    {
        printf("Entered vowel is a consonant");
    }
}