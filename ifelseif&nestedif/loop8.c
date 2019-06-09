#include<stdio.h>
#include<stdlib.h>
int main()
{
int cp;
int sp;
int profit,loss;
printf("ENTER A SELLING PRICE\n");
scanf("%d",&sp);
printf("ENTER COST PRICE\n");
scanf("%d",&cp);
profit=sp-cp;
loss=cp-sp;
if(sp>cp)
printf("PROFIT  %d\n",profit);
else
printf("LOSS  %d\n",loss);


}
