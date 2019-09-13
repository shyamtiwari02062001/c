// A GUESSING GAME

//declare the preprocessor
#include<stdlib.h>
#include<stdio.h>

//declare the main function
int main(){
    //declare the variables
    int max_guess=3;
    
    int guess_number=8;
    int n=0;
    //take the guess number and loop to check the correct option
   printf("Guess a correct number between 1 to 9 \n");
   printf("NOTE :- You are having only three chances to win the game\n");
   scanf("%d",&n);
    if(guess_number==n){
        printf("YOU WON\n");
    }
    else if(guess_number!=n){
        scanf("%d",&n);
         if(guess_number==n)
         {
        printf("YOU WON\n");
        }
        else if(guess_number!=n){
            scanf("%d",&n);
            if(guess_number==n){
                printf("YOU WON\n");
            }
            else{
                printf("YOU LOOSE\n");
            }
        }
    }
    //declare the return type
    return 0;
}