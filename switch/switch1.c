#include <stdio.h>
int main()
{
int s;
printf("ENTER THE PERCENTAGE\n");
scanf("%d",&s);
switch(s)
{
case 90:
printf("EXCELLENT");
break;
case 80:
printf("VERY GOOD");
break;
case 70:
printf("GOOD");
break;
case 60:
printf("NICE");
break;
case 50:
printf("POOR");
break;
case 40:
printf("fail");
break;
default:
printf("GRADE UNKNOWN");
}
return 0;
}

