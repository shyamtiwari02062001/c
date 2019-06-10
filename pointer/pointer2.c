#include<stdio.h>
int main()
{
int x=20;int y=10;int z=40;
int *a,*b,*c;
a=&z;
b=&y;
c=&x;
*c=(*a)*(*b);
printf("%d\n",*c);
}
