#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void game()
{
    int input,i=1,c_in;
    int scoreuser=0;
    int scorecomputer=0;
    printf("\n CODES ARE: \n ENTER 0 FOR ROCK \n ENTER 1 FOR PAPER \n ENTER 2 FOR SCISSOR \n");
    while(i<=3)
    {
        printf("\n USER's TURN: \n ENTER YOUR CHOICE: ");
        scanf("%d",&input);
        srand(time(NULL));
        c_in=rand()%3;
        printf("\n COMPUTER's TURN: \n ENTERED CHOICE IS: %d",c_in);
        if(input==c_in)
        {
            printf("\n ROUND DRAW!");
        }
        else if((input==0 && c_in==2) || (input==1 && c_in==0) || (input==2 && c_in==1))
        {
            printf("\n USER WINS THIS ROUND!");
            scoreuser++;
        }
        else if((input==0 && c_in==1) || (input==1 && c_in==2) || (input==2 && c_in==0))
        {
            printf("\n COMPUTER WINS THIS ROUND!");
            scorecomputer++;
        }
        i++;
    }
    if(scoreuser==scorecomputer)
    {
        printf("\n YOUR SCORE = %d",scoreuser);
        printf("\n COMPUTER SCORE = %d",scorecomputer);
        printf("\n GAME TIED...");
    }
    else if(scoreuser>scorecomputer)
    {
        printf("\n YOUR SCORE = %d",scoreuser);
        printf("\n COMPUTER SCORE = %d",scorecomputer);
        printf("\n USER WINS THE GAME...");
    }
    else
    {
        printf("\n YOUR SCORE = %d",scoreuser);
        printf("\n COMPUTER SCORE = %d",scorecomputer);
        printf("\n COMPUTER WINS THE GAME...");
    }
}
int main()
{
    int choice;
    game();
    while(1)
    {
        printf("\n PRESS 1 FOR NEW GAME... \n PRESS 2 TO EXIT...");
        scanf("%d",&choice);
        if(choice==1)
        {
            game();
        }
        else
        {
            printf("____ THANKS FOR PLAYING ____");
            return 0;
        }
    }
}