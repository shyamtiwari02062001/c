
// declare the pre processor
#include<stdio.h>
#include<stdlib.h>
// write the main function
int main(){

    // run loop to print
    for(int i=0;i<=11;i++){
        for(int j=0;j<=i;j++){
            printf(" ");
        }
        for( int e=11;e>=i;e--){
            printf("* ");
        }
        

        printf("\n");
    }
    //declare the return type
    return 0;
}