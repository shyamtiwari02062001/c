#include<stdio.h>
int main()
{
int i;
printf("ENTER ANY NUMBER TO PRINT ITS TABLE");
scanf("%d",&i);
int j=1;
while(j<=10)
{
printf("%d\n",j*i);
j++;
}
return 0;
}
