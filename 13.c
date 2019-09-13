#include<stdio.h>
#include<stdlib.h>
int main(){
     for(int i=0;i<=10;i++){
        for(int j=10;j>=i;j--){
            printf("   ");
        }
        for(int k=0;k<=i;k++){
            printf(" * ");
        }
        for(int l=1;l<=i;l++){
            printf(" * ");
        }
         for(int e=10;e>=i;e--){
            printf("     ");
        }
        for(int r=0;r<=i;r++){
            printf(" * ");
        }
        for(int t=1;t<=i;t++){
            printf(" * ");
        }
        
        
       
        printf("\n");
    }
    for(int i=0;i<=20;i++){
        for(int j=0;j<=i;j++){
            printf("   ");
        }
        for( int e=20;e>=i;e--){
            printf(" * ");
        }
        for( int f=21;f>=i;f--){
            printf(" * ");
        }
        

        printf("\n");
    }
    
}