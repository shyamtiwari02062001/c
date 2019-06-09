#include <stdio.h>
int main()
{
int i,f=1;
printf("ENTER A VALUE TO FIND ALL ODD VALUES UPTO THERE  ");
scanf("%d",&i);
for(int j=1;j<=i;j++)
{
if(j%2!=0)
printf("%d\n",j);
}

return 0;
}

