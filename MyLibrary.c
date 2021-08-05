#include <stdio.h>
#include "MyLibrary.h"
// Enter elements of array
void EnterArray( int A[], int n)
{
	printf("\nEnter elements of array\n");
	for (int i = 0; i < n; i++)
	{
		printf("Enter element A[%d]=\n", i); scanf_s("%d", &A[i]);
	}
}
// Display elements of array
void DisplayArray(int A[] , int n)
{
	printf("-------------------- Display Array ------------\n");
	for (int i = 0; i < n; i++)
	{
		printf("A[%d]=%d\n", i, A[i]);
	}
}