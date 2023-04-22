#include<stdio.h>
void main ()
{

int x=2,y=5;

x= y++ + x++;
y= ++y + ++x;
printf("%d %d\n",x,y);

}