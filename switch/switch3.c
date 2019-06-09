#include <stdio.h>
int main()
{
int s;
printf("ENTER THE WEEKDAY NUMBER\n");
scanf("%d",&s);
switch(s)
{
case 1:
printf("MONDAY");
break;
case 2:
printf("TUESDAY");
break;
case 3:
printf("WEDNESSDAY");
break;
case 4:
printf("THUSDAY");
break;
case 5:
printf("FRIDAY");
break;
case 6:
printf("SATURDAY");
break;
case 7:
printf("SUNDAY");
break;
default:
printf(" UNKNOWN WEEKDAY");
}
return 0;
}

