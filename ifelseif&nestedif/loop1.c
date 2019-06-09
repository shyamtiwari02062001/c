#include<stdio.h>
#include<stdlib.h>
int main()
{
int a;
int b;
int c;
printf("ENTER A NUMBER\n");
scanf("%d",&a);
printf("ENTER SECOND NUMBER\n");
scanf("%d",&b);
printf("ENTER THIRD NUMBER\n");
scanf("%d",&c);
printf("THE GREATEST NUMBER IS");
if(a<b && b>c)
printf("%d\n",b);
else if (a>b && b<c)
printf("%d\n",a);
else
printf("%d\n",c);
}
