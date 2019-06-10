#include<stdio.h>
int main()
{
int i=0;
int z=1;
printf("ENTER A NUMBER TO PRINT NATURAL NUMBER UPTO THERE");
scanf("%d",&i);
do
{
printf("%d\n",z);
z++;
}
while(z<=i);

return 0;
}
