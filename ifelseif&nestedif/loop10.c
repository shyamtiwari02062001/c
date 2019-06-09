#include<stdio.h>
#include<stdlib.h>
int main()
{
char a;
printf("enter anything\n");
scanf("%c",&a);
if(a>=65 && a<=90 )
printf("IT IS UPPERCASE\n");
else if(a>=97&&a<=120)
printf("IT IS LOWERCASE\n");
else if(a>=48&&a<=57)
printf("IT IS DIGIT\n");
else
printf("IT IS A SYMBOL\n");
}
