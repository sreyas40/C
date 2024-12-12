#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    struct player
    {
        char name[50];
        int score;
    };
    struct player players[100];
    int count = 0, n;
    while (1)
    {
        printf("\n1.Add new player\n2.Update score of existing player\n3.Print scoreboard\n\n");
        printf("Choose an action:");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            char *player_name;
            player_name = (char *)malloc(10 * sizeof(char));
            int player_score, player_valid = 0;
            printf("Enter player name:");
            scanf("%s", player_name);
            printf("Enter player score:");
            scanf("%d", &player_score);
            for (int i = 0; i <= count; i++)
            {
                if (strcmp(players[i].name, player_name) == 0)
                {
                    printf("\nplayer already exists\n\n");
                }
                else
                {
                    player_valid = 1;
                    break;
                }
            }
            if (player_valid)
            {
                strcpy(players[count].name, player_name);
                players[count].score = player_score;
                count++;
                free(player_name);
                printf("\nplayer added successfully\n\n");
            }
            break;
        }
        case 2:
        {
            char *player_name;
            player_name = (char *)malloc(10 * sizeof(char));
            int player_score;
            printf("Enter player name:");
            scanf("%s", player_name);
            for (int i = 0; i <= count; i++)
            {
                if (strcmp(players[i].name, player_name) == 0)
                {
                    printf("Enter updated score of player:");
                    scanf("%d", &player_score);
                    players[i].score = player_score;
                    free(player_name);
                    printf("\nplayer score updated successfully\n\n");
                    break;
                }
                if (i == count)
                {
                    printf("player not found");
                }
            }
            break;
        }
        case 3:
        {
            printf("\n");
            for (int i = 0; i <= count; i++)
            {
                printf("Player-%s score -%d\n", players[i].name, players[i].score);
            }
            printf("\n");
            break;
        }
        default:
            printf("invalid choice");
        }
    }

    return 0;
}