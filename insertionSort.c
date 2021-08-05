#include <stdio.h>
#include "MyLibrary.h"
void InsertionSort(int E[], int n);
int main()
{	
	int n;
	printf("Enter number of elevents:"); scanf_s("%d", &n);
	printf("The number of elements of array is :%d \n", n);

	int A[100];
	// Enter elements of array
	EnterArray(A,n);
	// Display elements of array
	DisplayArray(A ,n);
	// sort array
	InsertionSort(A, n);
	// display array before sort
	printf("array befor sort\n");
	DisplayArray(A, n);
	return 0;
}
void InsertionSort(int E[], int n)
{
	for (int i = 1; i < n; i++)
	{
		int v = E[i];
		int j;
		for(j =i-1; j>=0;j--)
		{
			if( E[j]> v )
			{
				E[j+1] = E[j];
			}
			else
				break; 

		}
		E[j + 1] = v;
		
	}
}