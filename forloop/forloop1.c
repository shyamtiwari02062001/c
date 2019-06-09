#include <stdio.h>
int main()
{
int s;
printf("ENTER ANY NUMBER TO PRINT ITS TABLE   ");
scanf("%d",&s);
for(int j=1;j<=10;j++)
{
int l=s*j;
printf("   %d\n",l);
}
return 0;
}

