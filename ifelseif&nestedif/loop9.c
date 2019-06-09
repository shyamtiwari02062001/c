#include<stdio.h>
#include<stdlib.h>
int main()
{
char a;
printf("enter any alphabet\n");
scanf("%c",&a);
if(a>=65 && a<=90)
printf("IT IS UPPERCASE\n");
else
printf("IT IS LOWERCASE\n");
}
