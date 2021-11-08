// Veronese Francesco
/*Si scriva una funzione in linguaggio C che prenda in input una stringa e un carattere.
La funzione deve contare le occorrenze del carattere all'interno della stringa.
La funzione deve necessariamente essere di tipo void.
Nel main si richiami la funzione e si mostri a video il risultato.
Esempio di esecuzione:

$ ./a.out pippo p
Il carattere p compare 3 volte in pippo

$./a.out ciao b
Il carattere b compare 0 volte in ciao
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
void ContaOccorrenza(char* stringa,char lettera,int * numtrovato)
{
printf("inserire la stringa\n");
scanf("%s",stringa);

printf("inserire la lettera\n");
scanf("%s",&lettera);

printf("la stringa è %s\n",stringa);
printf("la lettera è %s\n",&lettera);

for(int i=0;i<0;i++)
{
	if(lettera==stringa[i])
	{
		numtrovato=numtrovato+1;
	}
}

}

int main()
{
char stringa[100];
char l;
int numtrovato;
ContaOccorrenza(stringa,l,&numtrovato);
printf("la lettera è stata trovata nella stringa %d volte\n",numtrovato);

return 0;
}
