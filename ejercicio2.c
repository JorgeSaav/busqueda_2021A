#include <stdio.h>
#define N 10

//autor Jorge Armando Ramirez Saavedra

/*m                                                        //programa sin funcion, si se quiere activar quitar / que tengan *m
int main()
{
	int i, arr[N], numMen, posicion;
	
	for(i=0; i<N; i++)
	{
		printf("Dame el numero del arreglo: ");
		scanf("%d", &arr[i]);
	}

	numMen=arr[0];
	
	posicion=-1;
	
	for(i=1; i<N; i++)
	{
		if(arr[i]<numMen)
		{
			numMen=arr[i];
			posicion=i;
		}
	}
	
	if(posicion==-1)
	printf("El numero menor es %d, y esta en la posicion [0]", arr[0]);
	else
	printf("El numero menor es %d, y esta en la posicion [%d]", numMen, posicion);
}
m*/

/*n
int BusMenor(int arr[N]);                                                    //programa con funcion, si se quiere activar quitar /* que tengan n
int BusMenorPos(int arr[N]);

int main()
{
	int i, arr[N], numMen, posicion;
	
	for(i=0; i<N; i++)
	{
		printf("Dame el numero del arreglo: ");
		scanf("%d", &arr[i]);
	}

	numMen=BusMenor(arr);
	posicion=BusMenorPos(arr);
	
	if(posicion==-1)
	printf("El numero menor es %d, y esta en la posicion [0]", arr[0]);
	else
	printf("El numero menor es %d, y esta en la posicion [%d]", numMen, posicion);
}

int BusMenor(int arr[N])
{
	int i, numMen, posicion;
	
	numMen=arr[0];
	posicion=-1;
	
	for(i=1; i<N; i++)
	{
		if(arr[i]<numMen)
		{
			numMen=arr[i];
			posicion=i;
		}
	}
	
	return numMen;
}

int BusMenorPos(int arr[N])
{
	int i, numMen, posicion;
	
	numMen=arr[0];
	posicion=-1;
	
	for(i=1; i<N; i++)
	{
		if(arr[i]<numMen)
		{
			numMen=arr[i];
			posicion=i;
		}
	}
	
	return posicion;
}
n*/








