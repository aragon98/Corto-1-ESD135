#include<stdio.h>
#define size 3
int main()
{
int sala[size][size]={{1, 2, 3},{4, 5, 6},{7, 8, 9}};

	

float ganancia=0;
int opcion, asiento, i, j; 

do{
	//Creamos un menu y mostramos la matriz 0 equivale a asiento vacio y 1 a ocupado
	printf("Bienvenido a Cinepolis\n");
	printf("Menu: (Seleccione un numero)\n");
	printf("1. Seleccione un asiento\n");
	scanf("%d",&opcion);
	switch(opcion){
	case 1:
		for (i = 0; i <size ; i++)
		{
			printf("\n");
			for (j = 0; j <size ; j++)
			{
				printf("%d\t",sala[i][j]);
			}
			
		}
		printf("¿Que asiento desea?");
		scanf("%d",&asiento);
		
		//Con 0 pondremos el asiento ocupado
		for (i = 0; i < ; i++)
		{
			for (j = 0; j < ; j++)
			{
				if(asiento==sala[i][j])
				{
						sala[i][j]=0;
				}
			}
			
		}
		for (i = 0; i <size ; i++)
		{
			printf("\n");
			for (j = 0; j <size ; j++)
			{
				printf("%d\t",sala[i][j]);
			}
		
		
		
	break;
		
	}
	}while(opcion !=2);

return 0;
}
