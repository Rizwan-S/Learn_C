#include<stdio.h>

void swap(long long int* x, long long int* y)	/*function for swapping*/
{
	long long int temp = *x; 
	*x = *y;
	*y = temp;
}

int partition (long long int arr[], long long int low, long long int high)	/*function for partition*/
{
	long long int j,pivot = arr[high];
	long long int i = (low - 1);

	for ( j = low; j <= high - 1; j++)	/*swap the elements if arr[j] <= pivot*/
	{
		if (arr[j] <= pivot)
		{
			i++;
			swap(&arr[i], &arr[j]);
		}
	}

	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}

void quicksort( long long int arr[], long long int low, long long int high)	/*function for quicksort*/
{
	if (low < high)
	{
		long long int id = partition(arr, low, high);
		quicksort(arr, low, id - 1);
		quicksort(arr, id + 1, high);
	}
}

int main()
{
	int n, i, j;	/*n, i, j are index variables*/
	
	scanf("%d\n", &n);	/*input the number of elements*/
	
	long long int arr[n], test[n];
	
	j = n;	

	for (int i = 0; i < n; i++)	/*input the elements of array which are , separated*/
	{
		scanf("%lld,", &arr[i]);
	}

	for (int i = 0; i < n; i++)	/*make another copy of array named test*/
	{
		test[i] = arr[i];
	}
	
	quicksort(arr, 0, n - 1);	/*function call for quicksort*/

	for (int i = 0; i < j; i++)	/*print the sorted array*/
	{
		printf("%lld ", arr[i]);
	}
	
	i = 0;	

	while(i < j)
	{
		if(arr[i] == test[j-1])		/*this loop will print the index no. of pivot present in sorted array*/
		{
			printf("\n%d", i);
			break;
		}
		i++;
	}
}
