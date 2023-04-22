#include<stdio.h>
void main()
{
char ch;
printf("Enter character");
scanf("%c",&ch);
switch (ch=='a' ||ch=='e' ||ch=='i' ||ch=='o' ||ch=='u' ||ch=='A' ||ch=='E' ||ch=='I' ||ch=='O' ||ch=='U')
{
case 1:
  printf("Character is a vowel");
    break;
    case 0:
  printf("Character is a consonant");
    break;

default:printf("Invalid input");
    break;
}

}