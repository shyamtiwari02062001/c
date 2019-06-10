#include<stdio.h>
int main()
{
int i,j;
for(j=0;j<=5;j++)
{
for(int k=5;k>=j;k--)
{
printf(" ");
}
for(int i=0;i<=j;i++)
{
printf("*");
}
printf("\n");
}
return 0;
}
