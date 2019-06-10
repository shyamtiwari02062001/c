    #include <stdio.h>
     
    int main()
    {
 int roll[5]={6,9,2,0,1};
int r,m=0,i;
printf("ROLL NO IS GIVEN BELOW\n");
for(i=0;i<=4;i++)
{
printf("%d \n",roll[i]);
}
printf("ENTER YOUR ROLL NO TO SEARCH\n");
scanf("%d",&r);
for(i=0;i<=4;i++)
{
if(r==roll[i])
printf("ROLLNO FOUND\n");
}


      return 0;
    }
