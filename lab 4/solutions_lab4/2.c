/*linear search in an array*/

#include<stdio.h>
int main()
{
	int x, array[10], j = 0, no_of_comparisons; 	

	for ( int i = 0; i < 10; i++) /*input the 10 numbers (separated by comma) in an array*/
	{
		scanf("%d,", &array[i]);
	}

	scanf("%d", &x);	/*input the number you want to search in array*/

	for ( int i = 0; i <10; i++)	/*This loop will compare the elements of array with the number you want to seach*/
	{
		if ( x == array[i])/*if the number is found in array, print 1 along with the number of comparisons and make j=1*/
		{	
			no_of_comparisons = i+1;
			printf("1 %d", no_of_comparisons);
			j = 1;
			break;
		}
	}

	if ( j == 0)  /*if j=0 (or j not equal to 1) then print 0 along with the number of comparisons made(here it will be 10)*/
	{
		printf("0 10");
	}

	return 0;
}
