#include<stdio.h>
int main()
{
int arr[5];
for(int i=0;i<=4;i++)
{
printf("ENTER NUMBER IN ARRAY\n",&i);
scanf("%d",&arr[i]);
}
for(int i=0;i<=4;i++)
{
printf("THE NUMBER IN ARRAY ARE %d\n",arr[i]);
}
}
