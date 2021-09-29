#include <stdio.h>

int main()
{
	int r, c, arrbi[100][100], i, j,  numMen, posicionx, posiciony;
	
	printf("Dame el numero de renglones: ");
	scanf("%d", &r);
	
	printf("Dame el numero de columnas: ");
	scanf("%d", &c);
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("Dame el valor: ");
			scanf("%d", &arrbi[i][j]);
		}
	}
	
	for(i=0; i<r; i++)
	{	
		
		numMen=arrbi[i][0];
		
		for(j=0; j<c; j++)
		{	
			if(numMen>arrbi[i][j])
			{
			numMen=arrbi[i][j];
			posicionx=i;
			posiciony=j;
			}
			
		}
		
		printf("El numero menor es: %d, en la posicion [%d][%d]\n", numMen, posicionx, posiciony);
	}
	
	return 0;	
}
/*
int BuscarMen(int arr[100][100], int r, int c, int *posx, int *posy);    //en la funcion no pude encontrar bien la solucion

int main()
{
	int r, c, arrbi[100][100], i, j,  numMen, posx, posy;
	
	printf("Dame el numero de renglones: ");
	scanf("%d", &r);
	
	printf("Dame el numero de columnas: ");
	scanf("%d", &c);
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("Dame el valor: ");
			scanf("%d", &arrbi[i][j]);
		}
	}
	
	numMen=BuscarMen(arrbi, r, c, &posx, &posy);
	
	printf("El numero menor es: %d, en la posicion [%d][%d]\n", numMen, posx, posy);
	
	return 0;	
	
}

int BuscarMen(int arrbi[100][100], int r, int c, int *posx, int *posy)
{
	int i, j, numMen;
		
	for(i=0; i<r; i++)
	{	
		
		numMen=arrbi[i][0];
		
		for(j=0; j<c; j++)
		{	
			if(numMen>arrbi[i][j])
			{
			numMen=arrbi[i][j];
			*posx=i;
			*posy=j;
			}
			
		}
		
	}
	
	return numMen;
}	

*/
