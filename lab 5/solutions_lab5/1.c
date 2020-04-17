/*Bubble sort*/

#include<stdio.h>

long long int bubble_sort(long long int array[])	/*bubble sort function to sort a array of length 20*/
{
	long long int replacer, countcompare = 0, countswap = 0;

	for (int n = 19; n > 0; n--)
		{
			for (int i = 0; i < n; i++)
			{
				countcompare++;
	
				if(array[i] > array[i+1])   /*if the succesor element of array is larger, replace the elements*/
				{
					replacer = array[i];
					array[i] = array[i+1];
					array[i+1] = replacer;
					countswap++;
				}
			}
		}
	for (int i = 0; i < 20; i++) 	/*print the sorted array*/
		{
			printf ("%lld ", array[i]);
		}
	
	printf("\n%lld %lld", countswap, countcompare);		/*print the no. of swaps and the no. of comparisons made*/
	return 0;	
}


int main()
{
	long long int array[20];

	for (int i = 0; i < 20; i++)	/*input 20 integers in an array*/
	{
		scanf("%lld,", &array[i]);
	}
	bubble_sort(array);	
	return 0;
}



