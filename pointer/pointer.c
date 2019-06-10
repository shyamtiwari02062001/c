#include<stdio.h>
int main()
{
int x=20;int y=30;int z=40;
int *a,*b,*c;
a=&x;
b=&y;
c=&z;
*c=*a+*b;
printf("%d\n",*c);
}
