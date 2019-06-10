#include<stdio.h>
int main()
{
int arr[5];
int sum;
for(int i=0;i<=4;i++)
{
printf("ENTER NUMBER IN ARRAY\n",&i);
scanf("%d",&arr[i]);
}
for(int i=0;i<=4;i++)
{
sum=sum+arr[i];
}
printf("THE SUM OF ALL NUMBER OF ARRAY IS %d\n",sum);
}
