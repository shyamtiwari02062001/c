#include <stdio.h>
int main()
{
   int i, num;
   printf("Please enter a number: \n");
   scanf("%d", &num);
   for(i=1;i<=num;i++)
{
   if(i%2==0)
   printf("IT IS EVEN  %d\n",i);
else
   printf("IT IS ODD  %d\n",i);
}
  
}

