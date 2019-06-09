#include<stdio.h>
#include<stdlib.h>
int main()
{
int a;
int b;
int c;
printf("ENTER FIRST ANGLE\n");
scanf("%d",&a);
printf("ENTER SECOND ANGLE\n");
scanf("%d",&b);
printf("ENTER THIRD ANGLE\n");
scanf("%d",&c);
if((a+b+c)==180)
printf("IT IS TRIANGLE\n");
else
printf("IT IS NOT A TRIANGLE\n");
}
