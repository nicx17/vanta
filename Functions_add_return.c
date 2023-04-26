#include<stdio.h>
int sum(int a,int b);
void main()
{

int p,q,r;
printf("Enter two variables");
scanf("%d%d",&p,&q);
r=sum(p,q);
printf("Result is %d",r);
}

int sum (int a, int b)
{
int c;
c=a+b;
return c;

}