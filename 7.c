// Program to find the number divisible by 5

//write the preprocessor
#include<stdio.h>
#include<stdlib.h>

//declare the main function
int main(){
    
    //declare the variables
    int n;

    //take input from user
    printf("Enter the value upto which you want the multiple of 5 \n");
    scanf("%d",&n);
    
    //loop to print the values
    for(int i=1;i<=n;i++){
        if(i%5==0){
            printf(" %d ",i);
        }
    }
    printf("\n");

    //declare the return type
    return 0;
}