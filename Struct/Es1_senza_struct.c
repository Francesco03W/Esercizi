/*dati 3 array:

char *names[] = {"Luca","Lorenzo","Davide", "Luca"};
char *surnames[] = {"Montini","Canali","Fiorini", "Greggio"}; int age[] = {22,24,24,26};

Mostrare in output il nome della persona più vecchia*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int older(int ar1[], int dim){
    int max = ar1[0], pos;
    int i;
    for (i = 0; i < dim; i++)
    {
        if (ar1[i] > max)
        {
            max = ar1[i];
            pos = i;
        }    
    }
    return pos;
}

int main(){
    char *names[] = {"Alessandro","Lorenzo","Davide", "Luca"};
    char *surnames[] = {"Montini","Canali","Fiorini", "Greggio"}; 
    int age[] = {22,24,24,26};

    int dim = (int)(sizeof(age)/sizeof(age[0]));
    int ind = older(age, dim);
    printf("La persona più vecchia e': %s %s \n", names[ind], surnames[ind]);
    return 0;
}