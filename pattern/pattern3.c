#include<stdio.h>
int main()
{
int i,j;
for(i=0;i<=5;i++)
{
for(j=0;j<=i;j++)
{
printf(" ");

}
for(int k=5;k>=i;k--)
{
printf("*");
}
printf("\n");
}
return 0;
}
