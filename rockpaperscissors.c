#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int num()
{
    srand(time(NULL));
    return rand() % 3;
}
void game()
{
    char name[20];
    char fun[20];
    char func[20];
    int user = 0;
    int comp = 0;
    printf("*****WELCOME TO ROCK PAPER & SCISSOR GAME!*****\n");
    printf("Instructions for the game: \n");
    printf("1.As soon as 'GO!' gets printed on the screen, type ROCK/PAPER/SCISSOR in CAPITAL LETTERS to record your response and thus start the game.\n2.Make sure you type your response in CAPITAL LETTERS with the correct spelling as shown above.\n");
    printf("Please enter your NAME.\n");
    scanf("%s", name);
    printf("\n");
    printf("GO!\n");

    for (int i = 0; i < 3; i++)
    {
        printf("Your turn:\n");
        scanf("%s", fun);
        if (num() == 0)
        {

            strcpy(func, "ROCK");
        }
        else if (num() == 1)
        {
            strcpy(func, "PAPER");
        }
        else
        {
            strcpy(func, "SCISSOR");
        }
        printf("Computer: %s\n", func);

        if (strcmp(fun, func) == 0)
        {
            user += 1;
            comp += 1;
        }
        if (strcmp(fun, "SCISSOR") == 0 && strcmp(func, "PAPER") == 0 || strcmp(fun, "PAPER") == 0 && strcmp(func, "ROCK") == 0 || strcmp(fun, "ROCK") == 0 && strcmp(func, "SCISSOR") == 0)
        {
            user += 1;
        }
        if (strcmp(func, "SCISSOR") == 0 && strcmp(fun, "PAPER") == 0 || strcmp(func, "PAPER") == 0 && strcmp(fun, "ROCK") == 0 || strcmp(func, "ROCK") == 0 && strcmp(fun, "SCISSOR") == 0)
        {
            comp += 1;
        }
    }
    printf("\n");

    printf("***SCORE CARD***\nSATYAM:%d/3\nCOMPUTER:%d/3\n", user, comp);
    if (user > comp)
    {
        printf("WINNER: %s\n", name);
    }
    else if (user < comp)
    {
        printf("WINNER: COMPUTER\n");
    }
    else
    {
        printf("It's a tie.");
    }

    printf("\nPress 1 to PLAY AGAIN.\n");
    printf("Press 2 to EXIT.\n");
}
int main()
{
    int x;
    game();
    for (int i = 0; i < 1000000; i++)
    {
        scanf("%d", &x);
        if (x == 1)
        {
            game();
        }
        else if (x == 2)
        {
            printf("Thanks for playing the game!\n");
            printf("Have a good day.\n");
            goto end;
        }
        else
        {
            printf("Invalid input.\n");
            printf("By default you have exited the game.\n");
            printf("Thanks for playing the game!\n");
            goto end;
        }
    }

end:

    return 0;
}

