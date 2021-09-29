#include <stdio.h>
#define N 10

//autor Jorge Armando Ramirez Saavedra

/*m                                                       //programa sin funcion, si se quiere activar quitar / que tengan *m
int main()
{
	int i, arr[N], numMay, posicion;
	
	for(i=0; i<N; i++)
	{
		printf("Dame el numero del arreglo: ");
		scanf("%d", &arr[i]);
	}

	numMay=arr[0];
	
	posicion=-1;
	
	for(i=1; i<N; i++)
	{
		if(arr[i]>numMay)
		{
			numMay=arr[i];
			posicion=i;
		}
	}
	
	if(posicion==-1)
	printf("El numero mayor es %d, y esta en la posicion [0]", arr[0]);
	else
	printf("El numero mayor es %d, y esta en la posicion [%d]", numMay, posicion);
}
m*/

/*n
int BusMayor(int arr[N]);                                                    //programa con funcion, si se quiere activar quitar /* que tengan n
int BusMayorPos(int arr[N]);

int main()
{
	int i, arr[N], numMay, posicion;
	
	for(i=0; i<N; i++)
	{
		printf("Dame el numero del arreglo: ");
		scanf("%d", &arr[i]);
	}

	numMay=BusMayor(arr);
	posicion=BusMayorPos(arr);
	
	if(posicion==-1)
	printf("El numero mayor es %d, y esta en la posicion [0]", arr[0]);
	else
	printf("El numero mayor es %d, y esta en la posicion [%d]", numMay, posicion);
}

int BusMayor(int arr[N])
{
	int i, numMay, posicion;
	
	numMay=arr[0];
	posicion=-1;
	
	for(i=1; i<N; i++)
	{
		if(arr[i]>numMay)
		{
			numMay=arr[i];
			posicion=i;
		}
	}
	
	return numMay;
}

int BusMayorPos(int arr[N])
{
	int i, numMay, posicion;
	
	numMay=arr[0];
	posicion=-1;
	
	for(i=1; i<N; i++)
	{
		if(arr[i]>numMay)
		{
			numMay=arr[i];
			posicion=i;
		}
	}
	
	return posicion;
}
n*/








