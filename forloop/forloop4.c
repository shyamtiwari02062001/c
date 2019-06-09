#include <stdio.h>
int main()
{
int s,sum=0;
printf("ENTER ANY NUMBER TO PRINT SUM OF NUMBER UPTO THERE   ");
scanf("%d",&s);
for(int j=1;j<=s;j++)
{
sum=sum+j;

}
printf("%d\n",sum);
return 0;
}

