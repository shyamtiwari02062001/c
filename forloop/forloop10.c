#include <stdio.h>
int main()
{
int i,j,k=0;
printf("ENTER A VALUE TO FIND ITS  FACTOR   ");
scanf("%d",&i);
for(j=1;j<=i;j++)
{
if(i%j==0)
printf("%d\n",j);
}
return 0;
}

