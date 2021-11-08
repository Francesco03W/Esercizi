//Veronese Francesco
/*
Si scriva un programma che ricerchi un carattere o una stringa
dentro ad un file di testo. Al termine della ricerca il programma
deve scrivere in un altro file di testo il risultato della ricerca.
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h> //funzione di alto livello, complicate, inseriscono fopen,fcreate che sono per file
//nei sistemi unix, ci sono le primitive, chiamate delle System Call(anche linux) che vanno direttamente ad interfacciarsi con il OS
//ogni file ha un descrittore (identificativo)
//quando si usano chiamate di sistema di basso livello queste chiamate di sistema lavorano con i descrittori del file
//si potrebbero usare chiamate come read,write,create; lavorano non solo sui file ma sono funzioni di bassissimo livello
//che vanno a scrivere uno stream di byte in un file descriptor

//il sistema unix individua il monitor con un descrittore,la stampante,una socket
//tutto I/O è gestito con i descrittori
//


void trovaChar(char* nomeFile,char* nomeOutput,char* car)
{
	int num=0;
	printf("La lettera cercata è %s \n",car);
	FILE* file; //dato primitivo gestito da C
	char ch;

	file = fopen(nomeFile,"r");
//usando un loop, legge il contenuto del file carattere per carattere
//si usa il metodo fgetc per leggere i caratteri
//legge il file fino alla END OF FILE
	while((ch=fgetc(file))!=EOF)
	{
		if(ch==*car)
		{
			num=num+1;
		}
	}
	fclose(file);

	printf("Il carattere inserito, e' presente nel testo %d volte\n",num);

//scrittura su file della frequenza del carattere
	FILE* fileOutput;
//conversione int to string
	char str_output[2];
	sprintf(str_output,"%d",num);
	printf("%s",str_output);

	fileOutput=fopen(nomeOutput,"w");
	fwrite(str_output,1,sizeof(str_output),fileOutput);
	fclose(fileOutput);

}


void trovaStringa(char* nomeFile,char* nomeOutput,char* stringIns)
{




}





int main(int argc, char **argv)

{

if(strcmp(argv[3],"-c")==0)
{
	printf("ricerca carattere\n");
	trovaChar(argv[1],argv[2],argv[4]);
}

if(strcmp(argv[3],"-p")==0)
{
	printf("ricerca stringa\n");

}
}
