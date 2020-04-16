/*binary search in array*/


#include<stdio.h>
int main()
{
	int array[10], x, lower = 0, upper = 9, mid, counter = 0, j = 0;

	for (int i = 0; i < 10; i++)	/*input the 10 numbers in array in ascending order separated by comma*/
	{
		scanf("%d,", &array[i]);
	}

	scanf("%d", &x); 	/*input the number you want to search in the array*/	

	while( lower <= upper)  /*run the loop while lower bound is less than upper bound*/
	{
		counter ++;
		mid = (lower + upper)/2;	/*increase counter and calculate mid*/

		if ( array[mid] == x )		/*if the number is found in array, print 1 and counter and make j=1*/
		{
			printf("1 %d", counter);
			j = 1;
			break;
		}

		else if ( array[mid] < x )	/*if the number is greater than array[mid], make lower = mid + 1 */
		{
			lower = mid + 1;
		}

		else 			/*if the number is less than array[mid], make upper = mid - 1 */
		{
			upper = mid - 1;
		}
	}

	if ( j == 0)		/*if j = 0( or j not equal to 1) print 0 along with the number of comparisons(counter)*/
	{
		printf("0 %d", counter);
	}
	return 0;
}
