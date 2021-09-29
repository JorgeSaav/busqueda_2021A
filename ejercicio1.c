#include <stdio.h>
#define N 10

//autor Jorge Armando Ramirez Saavedra

//int busqArr(int arr[N], int num);                                     //m, (aqui quitar los // del inicio de la linea de comando)

int main()
{
	int i, arr[N], num, posicion;
	
	for(i=0; i<N; i++)
	{
		printf("Dame el numero del arreglo: ");
		scanf("%d", &arr[i]);
	}
	
	printf("Dame el numero a buscar: ");
	scanf("%d", &num);
 /*                             //m
	posicion=busqArr(arr, num);                  //aqui es lo de la funcion, para activar quitar los /* que tengan m 
	
	if(posicion!=-1)
	printf("si existe y esta en la posicion: %d", posicion);
	else
	printf("%d", posicion);
*/                              //m
/*	                                          //n
	posicion = 2;                             //aqui es programa sin funcion, para activar quitar las /* que tengan n
	
	for(i=0; i<N; i++)
	{
		if(arr[i]==num)
		posicion=i;
	}
	
	
	if(posicion!=2)
	printf("si existe y esta en la posicion: %d", posicion);
	else
	printf("El numero no existe dentro del arreglo");
*/	                                          //n
	return 0;
	
}
/*                  //m
int busqArr(int arr[N], int num)
{
	int i, posicion;
	
	posicion=-1;
	
	for(i=0; i<N; i++)
	{
		if(arr[i]==num)
		posicion=i;
	}
	
	return posicion;
}
*/                //m
