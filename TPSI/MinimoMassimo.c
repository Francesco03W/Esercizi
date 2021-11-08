//Scrivere un programma in C che dopo aver letto N numeri,
// con N scelto dall'utente il massimo ed il minimo numeri inseriti.
// Suggerimenti: controllo di N con N>0 nessun controllo sui numeri inseriti
#include <stdio.h>

int* CreazioneArray(int* Array,int size)
{
	Array[size];
	int input;
	//popolazione array
	for(int i=0;i<size;i++)
	{	
		input=0;
		printf("inserire valore numero %d\n",i);
		scanf("%d",&input);
		Array[i]=input;
	}
return Array;
}

void OutputArray(int* Array, int size)
{
	Array[size];
	printf("L'array popolato:\n");
	for(int i=0;i<size;i++)
	{	
		printf("il valore numero %d e'' %d\n",i,Array[i]);
	
	}
}

void Minimo(int* Array, int size)
{
	int indice=0;
	for (int i = 1; i < size; i++)
	{
	
	    if (Array[i] < Array[indice])
	      indice = i;
	}
	printf("il valore minimo dell'array e'%d\n",Array[indice]);
}

void Massimo(int* Array, int size)
{
	int indice=0;
	for (int i = 1; i < size; i++)
	{
	    if (Array[i] > Array[indice])
	      indice = i;
	}
	printf("il valore massimo dell'array e'%d\n",Array[indice]);
}

int main()
{
	int numeriArray=0;
	do
	{
		printf("inserire il numero(maggiore di zero) di valori di cui calcolare il massimo o minimo\n");
		scanf("%d",&numeriArray);
	}while(numeriArray<=0);
	//creazione array
	int Array[numeriArray];
	//popolamento array
	int *Puntat_Array=CreazioneArray(Array,numeriArray);
	OutputArray(Puntat_Array,numeriArray);
	Minimo(Puntat_Array,numeriArray);
	Massimo(Puntat_Array,numeriArray);

return 0;
}
