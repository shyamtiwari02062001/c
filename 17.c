//Sessior paper rock

//define preprocessor
#include<stdio.h>
#include<stdlib.h>

//declare main function
int main(){
    //declare the variable
    char ch;
    printf("Enter the option s for sessior r for rock and p for paper\n");
    scanf("%c",&ch);
    if(ch=='s' || ch=='S'){
         printf("Your Option is Sessior\n");
    printf("You Won\n");
    }
   else if(ch=='r' || ch=='R'){
       printf("Your Option is Rock\n");
    printf("You Loose\n");
}
else  if(ch=='p' || ch=='P'){
     printf("Your Option is Paper\n");
    printf("You Loose\n");
 }
else{
    printf("Wrong input\n");
}
//declare return type
return 0;
}
