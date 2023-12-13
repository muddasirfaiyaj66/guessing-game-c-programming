#include <stdio.h>

int main()
{
    int player1Number, player2Guess, chancesLeft = 3;
    int player2Wins = 0;

    printf("Player-1, enter a number: ");
    scanf("%d", &player1Number);

    printf("Player-2, start guessing:\n");

    if( player2Wins == 0){
         printf("Enter your guess: ");
         scanf("%d", &player2Guess);

         if(player2Guess ==player1Number ){
            printf("Right, Player-2 wins!\n");
            player2Wins = 1;
         }else {
             chancesLeft--;
             if (chancesLeft > 0) {
                printf("Wrong, %d Chance(s) Left!\n", chancesLeft);
                printf("Enter your guess: ");
                scanf("%d", &player2Guess);

             if(player2Guess ==player1Number ){
                    printf("Right, Player-2 wins!\n");
                    player2Wins = 1;
                }
                else{
                    chancesLeft--;
                    if (chancesLeft > 0) {
                        printf("Wrong, %d Chance(s) Left!\n", chancesLeft);
                        printf("Enter your guess: ");
                        scanf("%d", &player2Guess);

                        if(player2Guess ==player1Number ){
                        printf("Right, Player-2 wins!\n");
                        player2Wins = 1;

                }
                 else{
                       printf("Player-1 wins!\n");
                    }
                    }else{
                        printf("Player-1 wins!\n");
                    }
                }
            } else {
                printf("Player-1 wins!\n");
            }

         }
    }
    return 0;
}
