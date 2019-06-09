#include<stdio.h>
#include<stdlib.h>
int main()
{
int per;
printf("ENTER THE PERCENTAGE OBTAINED\n");
scanf("%d",&per);
if(per<99 && per>75)
printf("EXCELLENT\n");
else if (per<76 && per>55)
printf("GOOD\n");
else
printf("poor\n");
}
