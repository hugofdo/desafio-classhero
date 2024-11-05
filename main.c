#include "stdio.h";

void main()
{

    char nomeHeroi[5][15] = "";
    unsigned int xp[5] = 0;
    int i = 0;
    char nivel[15] = "";

    printf("Bem vindo ao indicador de nível de herói!\nIremos dizer qual é seu nível baseado no valor de XP!");

    for (i = 0; i < 5; i++)
    {
        printf("\nPor Favor, nos informe o nome de seu heroi %d.\nR: ", i + 1);
        scanf("%s", &nomeHeroi[i]);
        printf("\nInforme o nível desse herói.\nR: ");
        scanf("%u", &xp[i]);
        system("cls");
    }

     for (i = 0; i < 5; i++)
    {
        if (xp[i] < 1000)
        {
            strcpy(nivel, "Ferro");
        }
        else if (xp[i] >= 1001 && xp[i] <= 2000)
        {
            strcpy(nivel, "Bronze");
        }
        else if (xp[i] >= 2001 && xp[i] <= 5000)
        {
            strcpy(nivel, "Prata");
        }
        else if (xp[i] >= 5001 && xp[i] <= 7000)
        {
            strcpy(nivel, "Ouro");
        }
        else if (xp[i] >= 7001 && xp[i] <= 8000)
        {
            strcpy(nivel, "Platina");
        }
        else if (xp[i] >= 8001 && xp[i] <= 9000)
        {
            strcpy(nivel, "Ascendente");
        }
        else if (xp[i] >= 9001 && xp[i] <= 10000)
        {
            strcpy(nivel, "Imortal");
        }
        else if (xp[i] >= 10001)
        {
            strcpy(nivel, "Radiante");
        }

        printf("O herói %d de nome %s apresenta o nível %s\n", i + 1, nomeHeroi[i], nivel);
    }
}