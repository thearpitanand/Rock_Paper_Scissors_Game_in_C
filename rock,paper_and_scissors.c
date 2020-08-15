#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int rockpaperscissors(char you, char computer)
{
    /*
        rp
        rs
        rr
        pr
        ps
        pp
        sp
        ss
        sr
    */
    if (you == 'r' && computer == 'p')
    {
        return -1;
    }
    else if (you == 'r' && computer == 's')
    {
        return 1;
    }
    else if (you == computer)
    {
        return 0;
    }
    else if (you == 'p' && computer == 's')
    {
        return -1;
    }
    else if (you == 'p' && computer == 'r')
    {
        return 1;
    }
    else if (you == 's' && computer == 'p')
    {
        return 1;
    }
    else if (you == 's' && computer == 'r')
    {
        return -1;
    }
}
int main()
{
    char you, computer;
    int result, number, play;
    srand(time(0));
    number = rand() % 100 + 1;
    if (number <= 33 && number > 0)
    {
        computer = 'r';
    }
    else if (number <= 67 && number > 33)
    {
        computer = 'p';
    }
    if (number <= 100 && number > 67)
    {
        computer = 's';
    }
    printf("**************** ROCK , PAPER & SCISSORS ****************\n");
    do
    {
        printf("Enter 's' for scissors, 'r' for rock and 'p' for paper\n\n\n");
        scanf(" %c", &you);
        printf("\n");
        result = rockpaperscissors(you, computer);
        if (result == 1)
        {
            /* You win */
            printf("Congratulation YOU WON\n\n\n");
        }
        else if (result == -1)
        {
            /* You Lose */
            printf("COMPUTER WON\n\n\n");
        }
        else
        {
            /*You and Computer both draw*/
            printf("GAME DRAW\n\n\n");
        }
        printf("You Chose '%c' and computer chose '%c'\n", you, computer);
        printf("Enter 1 if want to play this game again else type any number\n");
        scanf("%d", &play);
    } while (play == 1);
    printf("***************** Thank You for Playing *****************\n");
    printf("************************ THE END ************************\n");
    return 0;
}