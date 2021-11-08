#include <stdio.h>

int SceltaNumero()
{
	int NUM;
	do
	{
		printf("inserire il numero maggiore di zero\n");
		scanf("%d",&NUM);				
	}while(NUM<=0);

	return NUM;	
}

int Somma(int num1,int num2){
	int TS;
	TS=num1+num2;
	
	return TS;
}

int main()
{
	int N1,N2,TOT;
	
	N1=SceltaNumero();
	N2=SceltaNumero();
	
	TOT=Somma(N1,N2);
	printf("Somma: %d\n",TOT);
	
	
	return 0;
}
