//Program to calculate the natural number sum

//Write preprocessor
#include<stdio.h>
#include<stdlib.h>

//declare main function

int main(){

    //declare varible
    int n,sum=0;

    //take input from user
    printf("Enter value upto which you want to add the natural number\n");
    scanf("%d",&n);

    //add the values
    for(int i=0;i<=n;i++){
        sum=sum+i;
    }

    //print the value
    printf("Sum =%d\n",sum);

    //declare the return type

    return 0;

}