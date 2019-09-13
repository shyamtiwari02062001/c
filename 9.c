/* to print


*
**
***
****
*****


*/
// declare the pre processor
#include<stdio.h>
#include<stdlib.h>
// write the main function
int main(){

    // run loop to print
    for(int i=0;i<=4;i++){
        for(int j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
     //declare the return type
    return 0;
}