/* Ter um personagem, que vai ter vida, armadura e dano; Fazer 2 personagens, e lutar um contra o outro; Ter uma função que dá dano; */

#include <stdio.h>

struct character{
    int vida, armadura, dano;
};

int batalha(struct character p1, struct character p2){
    int winner;

    while (p1.vida > 0 && p2.vida > 0){
        p1.vida -= (p2.dano - p1.armadura);
        printf("Player_1 toma dano e fica com %d de vida\n", p1.vida);
        p2.vida -= (p1.dano - p2.armadura);
        printf("Player_2 toma dano e fica com %d de vida\n", p2.vida);
    }
    if (p1.vida <= 0){
        winner = 2;
    }
    else if (p2.vida <= 0){
        winner = 1;
    }

    return winner;

}

int main (){

    struct character player_1, player_2;
    int classe_p1, classe_p2, ganhador;

    printf("Informe a classe do Player 1\n1. Guerreiro\t2. Mago\t3. Ninja\n");
    scanf("%d", &classe_p1);

    switch (classe_p1){
        case 1:
        player_1.armadura = 10;
        player_1.vida = 100;
        player_1.dano = 10;
        break;

        case 2: 
        player_1.armadura = 0;
        player_1.vida = 100;
        player_1.dano = 14;
        break;

        case 3:
        player_1.armadura = 5;
        player_1.vida = 100;
        player_1.dano = 12;
        break;
    }

    printf("Informe a classe do Player 2\n1. Guerreiro\t2. Mago\t3. Ninja\n");
    scanf("%d", &classe_p2);

    switch (classe_p2){
        case 1:
        player_2.armadura = 10;
        player_2.vida = 100;
        player_2.dano = 10;
        break;

        case 2: 
        player_2.armadura = 0;
        player_2.vida = 100;
        player_2.dano = 14;
        break;

        case 3:
        player_2.armadura = 5;
        player_2.vida = 100;
        player_2.dano = 12;
        break;
    }

    ganhador = batalha(player_1, player_2);

    if (ganhador = 1){
        printf("O ganhador eh Player 1");
    } 
    else {
        printf("O ganhador eh Player 2");
    }





        

    

}