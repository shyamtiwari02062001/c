//Program  to calculate the sum of odd & even number

//write the preprocesor 
#include<stdio.h>
#include<stdlib.h>

//declare the main function
int main(){
    
    //declare the variables
    int n,sum=0;
    char ch;

    //check which type of number sum the user want to print
    printf("Enter the number type of which you want to print sum\n");
    printf("Enter N or n for natural number\n");
    printf("Enter E or e for even number\n");
    printf("Enter O or o for odd number :- ");
    scanf("%c",&ch);

   

    //add the values
    if(ch=='E' || ch=='e' || ch=='O' || ch=='o' || ch=='n' || ch=='N'){


    //take the value for n
    printf("Enter the value upto which you want to add\n");
    scanf("%d",&n);

    if(ch=='E' ||  ch=='e'){
        for(int i=0;i<=n;i=i+2){
            sum=sum+i;
        }
        printf("sum =%d\n",sum);
    }
     else if(ch=='O' ||  ch=='o'){
        for(int i=1;i<=n;i=i+2){
            sum=sum+i;
        }
        printf("sum =%d\n",sum);
    }
    else if(ch=='n' || ch=='N'){
        for(int i=1;i<=n;i++){
            sum=sum+i;
        }
        printf("sum =%d\n",sum);
    }
}
    else{
        printf("INVALID INPUT\n");
    }

    //declare the return type
    return 0;
}