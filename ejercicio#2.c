#include <stdio.h>

int main()
{
int tamanio;
printf("Ingrese el tamaño del vector");
scanf("%d",&tamanio);
int vector[tamanio];
int opcion;
int eliminar;
for (int i = 0; i < tamanio; i++)
{
	printf("Ingrese un numero\n");
	scanf("%d",&vector[i]);
}

for (int i = 0; i < tamanio; i++)
{
	printf("%d",vector[i]);
}

printf("Desea eliminar un dato\n Ingrese 1. Si\n2. No\n");
scanf("%d",&opcion);
	if(opcion == 1)
	{
		printf("Ingrese el dato a eliminar");
		scanf("%d",&eliminar);
		for (int i = 0; i < tamanio; i++)
		{
			if(eliminar == vector[i])
			{
				vector[i]=0;
			}
		}
		for (int i = 0; i < tamanio; i++)
		{
			printf("%d",vector[i]);
		}
		
		
	}else
	{
		
	}


printf("\nHasta la proxima xD");

return 0;
}
