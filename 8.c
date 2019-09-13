// Program to print table of desired value by user

//write the preprocessors
#include<stdio.h>
#include<stdlib.h>

//declare the main function
int main(){

    //declare the variables
    int n;

    //take input from user
    printf("Enter the value of the table number\n");
    scanf("%d",&n);

    //loop for printing the table
    for(int i=1;i<=10;i++){
        printf("%d * %d = %d\n",n,i,n*i);
    }

    //declare the return type
    return 0;
}