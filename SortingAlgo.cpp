/* Sorting Algorithms */

#include <stdio.h>
#include "headerRand.h"

//Selection Sort//
int* SelectionSort(int* Arr, int size)
{
	int j,min,temp;
	for(int i=0;i<size-1;i++)
	{
		min =i;
		for(j=i+1;j<size;j++)
		{
			if(Arr[j]<Arr[min])
			{
				min = j;
			}
		}

		temp = Arr[i];
		Arr[i] = Arr[min];
		Arr[min] = temp;
	}
	return 0;
}

//Bubble Sort//

 int* BubbleSort(int*Arr, int size)
 {
 	int j,temp;
 	for(int i=0;i<size;i++)
 	{
 		for(j=0;j<size-1;j++)
 		{
 			if(Arr[j]>Arr[j+1])
 			{
 				temp = Arr[j];
 				Arr[j] = Arr[j+1];
 				Arr[j+1] = temp;
 			}
 		}
 	}
 	return 0;
 } 

//Insertion Sort//
 int* InsertionSort(int*Arr, int size)
{
	int j,temp;
	for(int i=0;i<size;i++)
	{
		temp=Arr[i];
		j=i;
		while((j>0) && (Arr[j-1]>temp))
		{
			Arr[j]=Arr[j-1];
			j=j-1;
		}
		Arr[j]=temp;
	}
	return Arr;
}


 int main()
 {
 	int size;
 	printf("Enter the size of the array:");
 	scanf("%d",&size);
 	int* myarray = randomArray(size);
 	printf("My array :");
 	printArray(myarray,size);
 	printf("The Bubble Sorted list :");
 	BubbleSort(myarray,size);                                                                      
 	printArray(myarray,size);
 	printf("The Insertion Sorted list :");
 	InsertionSort(myarray,size);
 	printArray(myarray,size);
 	printf("The Selection Sorted list :");
 	SelectionSort(myarray,size);
 	printArray(myarray,size);

 	return 0;
 }

 // THE END//