/*Es1 con struct
int age[] = {22,24,24,26};
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define DIM 4

typedef struct{
    char nome[20];
    char cognome[20];
    int eta;
}persona_s;

persona_s Creazione(){
    persona_s persona;
    printf("Inserisci nome: ");
    scanf("%s", persona.nome);

    printf("Inserisci cognome: ");
    scanf("%s", persona.cognome);

    printf("Inserisci eta': ");
    scanf("%d", &persona.eta);

    return persona;
}

persona_s older(persona_s pers[]){
    persona_s pp = pers[0];
    for(int i = 1; i < DIM; i++){
        if (pers[i].eta > pp.eta)
            pp = pers[i];        
    }
    return pp;
}

int main(){
    persona_s persona[DIM];

    for(int i = 0; i < DIM; i++)
        persona[i] = Creazione();

    system("clear");
    persona_s pers = older(persona);
    printf("La persona più vecchia è: %s %s\n", pers.nome, pers.cognome);

    return 0; 
}