#include<stdio.h>
int main()
{
int i=0;
int z=1;
printf("ENTER A NUMBER TO PRINT ODD NUMBER UPTO THERE");
scanf("%d",&i);
do
{
if(z%2!=0)
printf("%d\n",z);
z++;
}
while(z<=i);

return 0;
}
