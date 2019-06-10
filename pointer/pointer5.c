#include<stdio.h>
int main()
{
int x,y,z;
int *a,*b,*c;
a=&z;
b=&y;
c=&x;
printf("ENTER FIRST NUMBER\n");
scanf("%d",&z);
printf("ENTER SECOND NUMBER\n");
scanf("%d",&y);
*c=*a+*b;
printf("%d\n",*c);
}
