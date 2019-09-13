
// declare the pre processor
#include<stdio.h>
#include<stdlib.h>
// write the main function
int main(){

    // run loop to print
    for(int i=2;i<=4;i++){
        for(int j=4;j>=i;j--){
            printf(" ");
        }
        for(int k=0;k<=i;k++){
            printf("* ");
        }
        for(int j=4;j>=i;j--){
            printf("  ");
        }
          for(int l=0;l<=i;l++){
            printf("* ");
        }
        printf("\n");
    }
         for(int i=0;i<=10;i++){
        for(int j=0;j<=i;j++){
            printf(" ");
        }
        for( int e=10;e>=i;e--){
            printf("* ");
        }
        printf("\n");
    }
    //declare the return type
    return 0;
}