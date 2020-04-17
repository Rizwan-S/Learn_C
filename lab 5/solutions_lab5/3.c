#include<stdio.h>

int countcalled = 0;
void mergesort(long long int array[], int lower, int upper);
void merge (long long int array[], int lower, int mid1, int mid2, int upper);

int main()
{
	int n;
	scanf("%d\n", &n);	/*input the number of elements of array*/
	long long int array[n];

	for (int i = 0; i < n; i++)	/* input the elements of array*/
	{
		scanf("%lld,", &array[i]);
	}

	mergesort(array, 0, n-1);	/*call mergesort function*/

	for (int i = 0; i < n; i++)	/*print the sorted array*/
	{
		printf("%lld ", array[i]);
	}

	printf("\n%d", countcalled);	/*print the number of times merge function is called*/
	return 0;
}

void merge (long long int array[], int lower, int mid1, int mid2, int upper)	/*merge function*/
{
	long long int temp[1000];
	int i, j, k;
	i = lower;
	j = mid2;
	k = 0;

	while ( i <= mid1 && j <= upper)    /*transverse both arrays and in each iteration add smaller of both elements in temp*/
	{
		if (array[i] > array[j])	
		{
			temp[k] = array[j];
			j++;
			k++;
		}
		else
		{
			temp[k] = array[i];	
			i++;
			k++;
		}
	}

	while ( i <= mid1)	/*add elements left in first subarray*/
	{
		temp[k] = array[i];
		i++;
		k++;
	}

	while( j <= upper)	/*add elements left in second subarray*/
	{
		temp[k] = array[j];
		j++;
		k++;
	}
	
	for (i = lower, j = 0; i <= upper; i++, j++)	/*copy temp to original array*/
	{
			array[i] = temp[j];
	}
}

void mergesort(long long int array[], int lower, int upper)	/*mergesort function*/
{
	int mid;

	if (lower < upper)	/*while lower < upper, call mergesort and merge function accordingly*/
	{
		mid = (lower + upper) / 2;
		mergesort(array, lower, mid);
		mergesort(array, mid + 1, upper);
		merge(array, lower, mid, mid + 1, upper);
		countcalled++;
	}
}


