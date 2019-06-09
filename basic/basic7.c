#include<stdio.h>
#include<stdlib.h>
int main()
{
int marksobtained;
double average;
int phy,che, math,english,hindi;
printf("ENTER THE MARKS OF PHYSICS\n");
scanf("%d",&phy);
printf("ENTER THE MARKS OF CHEMISTRY\n");
scanf("%d",&che);
printf("ENTER THE MARKS OF MATHS\n");
scanf("%d",&math);
printf("ENTER THE MARKS OF ENGLISH\n");
scanf("%d",&english);
printf("ENTER THE MARKS OF HINDI\n");
scanf("%d",&hindi);
marksobtained=phy+che+math+english+hindi;
average=marksobtained/5;
printf("THE AVERAGE OF THE STUDENT IS =%lf\n",average);
}
