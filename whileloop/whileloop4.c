#include<stdio.h>
int main()
{
int i,j=1;
printf("ENTER ANY NUMBER TO PRINT  ALL ODD NUMBER");
scanf("%d",&i);
while(j<=i)
{
if(j%2!=0)
printf("%d\n",j);
j++;
}
return 0;
}
