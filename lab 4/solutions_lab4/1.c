#include<stdio.h>
int main()
{
	int i = 0, array[10]; 

	while (i < 10)	    /*input the 10 numbers separating them by comma(,) in an array of length 10*/
	{
		scanf("%d,", &array[i]);
		i ++;
	}
	
	for ( int i = 9; i >= 0; i--)	/*print the numbers in reverse order separating them by a space*/
	{
		printf("%d ", array[i]);
	}
	return 0;
}
