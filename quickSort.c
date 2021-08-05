#include <stdio.h>
#include "MyLibrary.h"
void SWAP(int* a, int* b);
int partition(int E[], int left, int right);
void QuickSort(int E[], int left, int right);

int main()
{
	int A[100], n;
	printf("nhap so phan tu cua mang n="); scanf_s("%d", &n);
	EnterArray(A, n);
	DisplayArray(A, n);
	QuickSort(A, 0, n - 1);
	printf("\nmang sau khi quicksort sssss\n");
	DisplayArray(A, n);
	return 0;
}
void SWAP(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

int partition(int E[], int left, int right)
{
	int i = left;
	int j = right;
	int pivot = E[right];
	while (i < j)
	{
		while (i < j && E[i] < pivot)
			i++;
		while (i < j && E[j - 1] >= pivot)
			j--;
		if (i < j)
		{
			SWAP(&E[i], &E[j-1]);
			i++;
			j--;
		}
	}
	if (E[i] > pivot)
		SWAP(&E[i], &E[right]);
	return i;
}

void QuickSort(int E[], int left, int right)
{
	if (right > left)
	{
		int i = partition(E, left, right);
		QuickSort(E, left, i - 1);
		QuickSort(E, i + 1, right);
	}
}