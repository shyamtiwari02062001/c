#include<stdio.h>
#include<stdlib.h>
int main()
{
int a;
int b;
printf("ENTER A NUMBER\n");
scanf("%d",&a);
printf("ENTER ANOTHER NUMBER\n");
scanf("%d",&b);
printf("THE GREATEST NUMBER IS");
if(a<b)
printf("%d\n",b);
else
printf("%d\n",a);
}
