// Program to check if a given string is odd or even

//write the pre processors

#include<stdio.h>
#include<stdlib.h>

//Declare the int function

int main(){

    //declare variables

    int n;

    //input the value
    printf("Enter the value to check that it is even or odd\n");
    scanf("%d",&n);
    
    //check that the number is even or odd
    if(n%2==0){
        printf("Even number\n");
    }
    else{
        printf("Odd number\n");
    }

    //declare the return type
    return 0;


}