// ROCK PAPER SCISSOR Game.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int random()
{
    srand(time(NULL));
    return rand() % 3;
}
int main(void)
{
    int i, no_of_rounds, users_choice, computers_choice, computer_score = 0, user_score = 0;

    printf("Enter number of rounds you wish to play::");
    scanf("%d", &no_of_rounds);
    printf("\n");
    for (i = 1; i <= no_of_rounds; i++)
    {
        printf("Enter what you choose for round %d \n 1.Rock \n 2.Paper \n 3.Scissors\n", i);
        printf("\n");

        scanf("%d", &users_choice);
        if (users_choice > 3)
        {
            printf("YOU ENTERED INVALID INPUT");
            break;
        }
        //printring users choice
        if (users_choice == 1)
            printf("So, you choose.....ROCK!!!\n");
        else if (users_choice == 2)
            printf("So, you choose .....PAPER!!!\n");
        else
            printf("So, you choose.....SCISSORS!!!\n");

        computers_choice = random();
        // 1.Rock
        // 2.Paper
        // 3.Scissors

        // printing computers choice
        if (computers_choice == 1)
            printf("I choose.....ROCK!!!\n");
        else if (computers_choice == 2)
            printf("I choose .....PAPER!!!\n");
        else
            printf("I choose.....SCISSORS!!!\n");

        printf("\n");

        // Draw
        if (computers_choice == users_choice)
        {
            printf("It's a draw\n");
            printf("\n");
        }

        // computer picks Rock
        else if (computers_choice == 1 && users_choice == 2)
        {
            printf("You win....\n");
            user_score++;
            printf("\n");
        }

        else if (computers_choice == 1 && users_choice == 3)
        {
            printf("Seems like this round is mine hahaha!!!\n");
            computer_score++;
            printf("\n");
        }

        // computer picks paper
        else if (computers_choice == 2 && users_choice == 1)
        {
            printf("Seems like this round is mine hahaha!!!\n");
            computer_score++;
            printf("\n");
        }

        else if (computers_choice == 2 && users_choice == 3)
        {
            printf("You win....\n");
            user_score++;
            printf("\n");
        }

        // computer picks scissors
        else if (computers_choice == 3 && users_choice == 1)
        {
            printf("You win....\n");
            user_score++;
            printf("\n");
        }

        else if (computers_choice == 3 && users_choice == 2)
        {
            printf("Seems like this round is mine hahaha!!!\n");
            computer_score++;
            printf("\n");
        }
    }
    printf("\n");
    printf("Your score=%d\n", user_score);
    printf("Computers score=%d\n", computer_score);
    printf("\n");
    if (user_score > computer_score)
    {
        printf("YOU WIN!!!\n");
        printf("This time you win but it ain't over what do you think of a rematch");
    }
    else if (user_score < computer_score)
    {
        printf("COMPUTER WINS!!!\n");
        printf("The outcome was obvious even before I started playing HAHAHA!");
    }
    else if (user_score == computer_score)
    {
        printf("IT'S A DRAW!!\n");
        printf("Well that was anticlimactic");
    }
    return 0;
}