#include<stdio.h>
void main ()
{
float a,b,c,d,e,f,g,h;
printf("Enter marks scored by student in 5 subjects ");
scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
f=((a+b+c+d+e)/500)*100;

if (f>=60)
{
    printf("First class");

}
else if (f>=50)
{
    printf("Second class");

}else {
    printf("Pass calss");
}

}