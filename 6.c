//Program to,check that a given number is positive or negative

//write preprocessor
#include<stdio.h>
#include<stdlib.h>

//declare mainfunction
int main(){

    //declare variables
    int n;

    //take input from user
    printf("Enter the value to check that the number is positive or negative\n");
    scanf("%d",&n);

    //check that it is positive or negative
    if(n>0){
        printf("The given number is positive\n");
    }
    else{
        printf("The given number is negative\n");
    }

    //declare return type
    return 0;

}