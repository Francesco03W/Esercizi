//Veronese Francesco 
#include <stdio.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/*
menu con varie opzioni per un array, chiede in input un array e fa operazioni
- stampa dell'array X
- stampa inversa(da fine ad inizio) X
- stampare tutti i numeri pari X
- stampare tutti i numeri dispari
- cercare un elemento all'interno dell'array in base a un input utente(controllare se c'√® o no)
- eliminare un elemento dell'array(con controllo se c'√® e non c'√®)
- alternare (o scambiare) a due a due le poszioni del vettore
esempio:1,2,3,4 vettore alternato: 2,1,4,3 (attenzione se dispari, non deve scambiare l'ultima)
- ordinamento con algoritmo a scelta

la ricerca si sar√† una funzione ceh ritorna la posizione dell'elemento se lo trova oppure -1
(riutilizzarlo in altre funzioni)

utilizza switch
*/
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
void OutputArrayReverse(int* Array, int size)
{
	Array[size];
	printf("L'array popolato:\n");
	for(int i=size-1;i>=0;i--)
	{
		printf("il valore numero %d e'' %d\n",i,Array[i]);
	}
}
void OutputArrayPari(int* Array,int size)
{
	printf("i numeri pari sono:\n");
	Array[size];
	for(int i=0;i<size;i++)
	{
		if(Array[i]%2==0)
		{
			printf("%d\n",Array[i]);	
		}
	}
}
void OutputArrayDispari(int* Array,int size)
{
	printf("i numeri dispari sono:\n");
	Array[size];
	for(int i=0;i<size;i++)
	{
		if(Array[i]%2!=0)
		{
			printf("%d\n",Array[i]);	
		}
	}
}
void CercaValore(int* Array,int size)
{
	Array[size];
	int valCercato,valIndexTrovato;
	bool boolTrovato=false;
	printf("inserire valore da cercare\n");
	scanf("%d",&valCercato);
	
	for(int i=0;i<size;i++)
	{
		if(valCercato==Array[i])
		{
			boolTrovato=true;
			printf("il valore cercato esiste, nell'indice %d\n",i);
		}
	}
	if(boolTrovato==false)
	{
		printf("non ci sono valori uguali a quello cercato\n");
	}
}
void EliminaValore(int* Array,int size)
{
	Array[size];
	int valCercato,valIndexTrovato;
	bool boolTrovato=false;
	printf("inserire valore da eliminare\n");
	scanf("%d",&valCercato);
	
	for(int i=0;i<size;i++)
	{
		if(valCercato==Array[i])
		{
			boolTrovato=true;
			printf("il valore cercato esiste, nell'indice %d\n",i);
			Array[i]=0;
			printf("il valore Ë stato azzerato\n");
		}
	}
	if(boolTrovato==false)
	{
		printf("non ci sono valori uguali a quello cercato\n");
	}
}

int* ScambioDueDue(int* Array,int size)
{
	Array[size];
	int temp;
	//si controlla se l'array Ë pari o dispari
	if(size%2==0)
	{
		for(int i=0;i<size;i++)
		{
			temp=Array[i]; //si prende il primo valore di i
			Array[i]=Array[i+1]; //si mette il valore di i++ in i
			Array[i+1]=temp; //si mette il primo valore di i in i++
			i++; //si incrementa, se l'indice 0 viene scambiato con l'indice 1, bisogna passare all'indice 2 con indice 3
		}
	}
	else
	{
		for(int i=0;i<size;i++)
		{
			//dato che l'array Ë dispari, come numero di valori, si esclude l'ultimo indice negli scambi
			if(i==size-1)
				break; //interrompe il for prima di ogni operazione
			else
			{
				temp=Array[i];
				Array[i]=Array[i+1];
				Array[i+1]=temp;
				i++;
			}
			
		}
	}

	
	//array modificato
	printf("Array con scambi:\n");
	for (int i = 0; i<size; i++)
	{
		printf("%d\n", Array[i]);
	}
	return Array;
}
int* OrdinamentoArray(int* Array,int size)
{
	int temp;
	//array di partenza
	printf("Array originale: \n");
	for (int i = 0; i < size; i++)
	{
		printf("%d\n", Array[i]);
	}
	//ordinamento array in ordine crescente  
	for (int i = 0; i < size; i++) 
	{
		for (int g = i+1; g < size; g++) 
		{
			if(Array[i] > Array[g]) 
			{
			    temp = Array[i];    
           		Array[i] = Array[g];    
           		Array[g] = temp;    
	    	}
		}
	}
	//array modificato    
	printf("\nArray modificato: \n");    
	for (int i = 0; i < size; i++)
	{
		printf("%d\n", Array[i]);
	}
	
	return Array;
}



int main()
{
	int size=0;
	printf("scegliere la lunghezza dell'array\n");
	scanf("%d",&size);
	int Array[size];
	printf("Inserire valori nell'array'");
	CreazioneArray(Array,size);
	//ciclo che dopo l'inserimento e popolazione dell'array, si ripete
	//cosÏ che l'utente possa scegliere diverse funzioni senza chiudere
	//il programma
	while(1)
	{

		//pulizia console per mostrare solo il menu
		system("cls");
		printf("Scegliere operazione da compiere\t\n\n"
		"1-Stampa array\t\n"
		"2-Stampa inversa\t\n"
		"3-Stampare i numeri pari\t\n"
		"4-Stampare i numeri dispari\t\n"
		"5-Cercare un elemento all'interno dell'array\t\n"
		"6-Eliminare un elemento nell'array\t\n"
		"7-Scambiare a due a due le posizioni dell'array\t\n"
		"8-Ordinamento Array "
		"\n");
		int caseLeave;
		int scelta=0;
		scanf("%d",&scelta);
		//il menu riparte finchË non si preme 0 dopo aver scelto un opzione (con continue;)
		switch(scelta)
		{	
		case 1:
			system("cls");
			printf("Stampa Array\n");
			OutputArray(Array,size);
			printf("\n 0- per tornare al menu\n");
			scanf("%d",&caseLeave);
			switch(caseLeave)
			{
				case 0:
					continue;
			}
		break;
		case 2:
			system("cls");
			OutputArrayReverse(Array,size);
			printf("\n 0- per tornare al menu\n");
			scanf("%d",&caseLeave);
			switch(caseLeave)
			{
				case 0:
					continue;
			}
		break;
		case 3:
			system("cls");
			OutputArrayPari(Array,size);
			printf("\n 0- per tornare al menu\n");
			scanf("%d",&caseLeave);
			switch(caseLeave)
			{
				case 0:
					continue;
			}
		break;
		case 4:
			system("cls");
			OutputArrayDispari(Array,size);
			printf("\n 0- per tornare al menu\n");
			scanf("%d",&caseLeave);
			switch(caseLeave)
			{
				case 0:
					continue;
			}
		break;
		case 5:
			system("cls");
			CercaValore(Array,size);
			printf("\n 0- per tornare al menu\n");
			scanf("%d",&caseLeave);
			switch(caseLeave)
			{
				case 0:
					continue;
			}
		break;
		case 6:
			system("cls");
			EliminaValore(Array,size);
			printf("\n 0- per tornare al menu\n");
			scanf("%d",&caseLeave);
			switch(caseLeave)
			{
				case 0:
					continue;
			}
			
		break;
		case 7:
			system("cls");
			ScambioDueDue(Array,size);
			printf("\n 0- per tornare al menu\n");
			scanf("%d",&caseLeave);
			switch(caseLeave)
			{
				case 0:
					continue;
			}
		break;
		case 8:
			system("cls");  
			OrdinamentoArray(Array,size);
			printf("\n 0- per tornare al menu\n");
			scanf("%d",&caseLeave);
			switch(caseLeave)
			{
				case 0:
					continue;
			}
			break;
		}
	}
	
return 0;

}








