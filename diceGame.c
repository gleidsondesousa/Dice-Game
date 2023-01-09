#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    srand ( time(NULL) );

    int players = 2;
    int diceSides = 6;
    int p1Total = 0;
    int p2Total = 0;
    int p1FirstRoll = 0;
    int p2FirstRoll = 0;
    int p1SecondRoll = 0;
    int p2SecondRoll = 0;
    int p1Sum = 0;
    int p2Sum = 0;

    printf("Player 1: Press enter to roll your first dice!\n");
    getc(stdin);

    p1FirstRoll = rand() % diceSides + 1;

    printf("You rolled a: %i", p1FirstRoll);

    p1Sum += p1FirstRoll;

    printf("\n\nPlayer 1: Press enter to roll your second dice!\n");
    getc(stdin);

    p1SecondRoll = rand() % diceSides +1;

    printf("You rolled a: %i", p1SecondRoll);

    p1Sum += p1SecondRoll;

    printf("\n\n\nPlayer 2's Turn!:");

    printf("\n\nPlayer 2: Press enter to roll your first dice!\n");
    getc(stdin);

    p2FirstRoll = rand() % diceSides + 1;

    printf("You rolled a: %i", p2FirstRoll);

    p2Sum += p2FirstRoll;

    printf("\n\nPlayer 2: Press enter to roll your second dice!\n");
    getc(stdin);

    p2SecondRoll = rand() % diceSides +1;

    printf("You 2 rolled a: %i", p2SecondRoll);

    p2Sum += p2SecondRoll;

    printf("\n\n Player 1's total is: %i", p1Sum);
    printf("\n\n Player 2's total is: %i", p2Sum);

    if (p1Sum > p2Sum)
    {
        printf("\n\nCongratulations player 1, you win!\n");
    }
    else if (p1Sum < p2Sum)
    {
        printf("\n\nCongratulations player 2, you win!\n");
    }
    else
    {
        printf("\n\nIt's a tie!\n");
    }
}