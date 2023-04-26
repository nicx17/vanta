#include<stdio.h>
void sum(int a ,int b);
void main()
{
int p,q;
printf("Enter two variables");
scanf("%d%d",&p,&q);
sum(p,q);

}
void sum (int a,int b)
{int c;
c=a+b;
printf("Result is %d",c);


}