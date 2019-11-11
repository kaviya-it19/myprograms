#include<stdio.h>
void main()
{
int a,b,c;
printf("enter angles of triangle");
scanf("%d%d%d", &a, &b, &c);
if(a+b+c==180)
{
printf("it is a valid triangle");
}
else
{
printf("not valid");
}
}

