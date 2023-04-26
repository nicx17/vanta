#include<stdio.h>
int swap(int x, int y);
void main()
{
int p,q,r,s;    
printf("Enter two variables");
scanf("%d%d",&p,&q);
s =swap(p,q);
r =swap(q,p);
printf("Value is %d  %d",r,s);


}
int swap (int  x,int y)
{
int c,d;
c=y;
d=x;
return c,d;



}