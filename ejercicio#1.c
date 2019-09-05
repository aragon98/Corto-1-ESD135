#include<stdio.h>
#define size 5
int main()
{
int sala[size][size]={{1, 2, 3, 4, 5},{6, 7, 8, 9, 10},{11, 12, 13, 14, 15},{16, 17, 18, 19, 20},{21, 22, 23, 24, 25}};

	

float ganancia=0, aux, costo;

int opcion, asiento, i, j; 

do{
	
	//Creamos un menu y mostramos la matriz 0 equivale a asiento vacio y 1 a ocupado
	printf("\nBienvenido a Cinepolis\n");
	printf("Menu: (Seleccione un numero)\n");
	printf("1. Seleccionar asiento.\n");
	printf("2. Ver ganancia\n");
	printf("3. Salir\n");
	scanf("%d",&opcion);
	switch(opcion){
	case 1:
		//Mostramos asientos al usuario
		for (i = 0; i <size ; i++)
		{
			printf("\n");
			for (j = 0; j <size ; j++)
			{
				printf("%d\t",sala[i][j]);
			}
			
		}
		//Selecion del usuario
		printf("\n¿Que asiento desea?\n");
		scanf("%d",&asiento);
		//Validamos si se ingresa numero negativo o mayor al de los asientos
		if (asiento<0 || asiento>25)
		{
			printf("El asiento no existe");
		}else{
		
	for (i = 0; i < size; i++)
	{
		if (asiento==sala[0][i])
		{
			costo=5.0;
		}else{
			if (asiento==sala[4][i])
			{
				costo=2.5;
			}else
			{
				if (asiento!=sala[0][i] && asiento!=sala[4][i] )
						{
							costo=3.5;
						}
			}
		}
	}
	
	//Con 0 pondremos el asiento ocupado y validamos si se ingresa un 0
		for (i = 0; i <size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if(asiento==sala[i][j])
				{
						sala[i][j]=0;
				}else
				{
					
				}
			}		
		}
		if (asiento==0)
					{
						printf("\nAsiento ocupado\n");
					}		
	
		
		
		//Acumulamos la ganancia en una variable
		ganancia=ganancia+costo;
		
		//Imprimimos
		for (i = 0; i <size ; i++)
		{
			printf("\n");
			for (j = 0; j <size ; j++)
			{
				printf("%d\t",sala[i][j]);
			}
		}
		
		printf("\nEl costo es de $%f",costo);
		printf("\nEn el asiento %d",asiento);
	}
		printf("\n");	
	break;
	
	//Ver ganancia
	case 2:
		printf("\nLa ganancia acumulada es de %f",ganancia);
	break;
		
	}
	}while(opcion==1 || opcion==2);
	
	printf("\n");
	printf("Hasta la proxima xD\n");

return 0;
}
