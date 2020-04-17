/*selection sort*/

#include<stdio.h>

void selection_sort(long long int list[])	/*function for selection sort*/
{
	int countswap = 0, countcompare = 0, n;

	for ( int i = 0; i < 20; i++)
	{
		long long int min = list[i];   
		int min_index = i;

		for ( n = i + 1; n < 20; n++)
		{
			countcompare ++;

			if ( list[n] < min )	/*find the min of the list*/
			{
				min = list[n];
				min_index = n;
			}
		}

		list[min_index] = list[i];	/*replace min with the first element of unsorted array*/
		list[i] = min;
		countswap ++;
	}

	for (int i = 0; i < 20; i++)		/*print the sorted array*/
	{
		printf("%lld ", list[i]);
	}
	printf("\n%d %d", countswap - 1, countcompare);	/*print the number of swaps and number of comparisons*/
}

int main()
{
	long long int array[20];

	for( int i = 0 ; i < 20; i++)		/*input 20 integers in an array*/
	{
		scanf("%lld,", &array[i]);
	}

	selection_sort(array);		/*function call for selection sort*/
	return 0;
}
