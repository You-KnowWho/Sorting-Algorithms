/* Random Number generator modified */
#include <stdio.h>
#include <stdlib.h>

void printArray(int* Arr, int size)
{
	for(int i=0;i<size;i++)
	{
		printf("%d, ",Arr[i]);
	}
	printf("\n");
}

int* randomArray(int size)
{
	unsigned seed;
	printf("Enter seed:");
	scanf("%u",&seed);
	srand(seed);

	int* A= (int*)malloc(size* sizeof(int));
	for(int i=0; i<size;i++)
	{
		A[i]=rand()%50;
	}
	return A;
}