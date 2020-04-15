#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int L, S, counter2=0;	/*L is lenght of substring & S is the length of string*/
	char string[1500];

	scanf("%s",string); 
	scanf("%d",&L);

	S = strlen(string);

	if (L > S)		/*if length of substring is greater than string, print 0*/
	{
		printf("0");
	}

	else
	{
		char array[S-L+1][L];	/*create a 2d array with no. of rows (S-L+1) & no. of columns (L)*/

		for(int i = 0; i < (S-L+1); i++)
		{
			for(int j = 0; j < L; j++)
			{
				array[i][j] = string[i+j];   /*input the string in 2d array*/
                        }

                }

		for (int i = 0; i < (S-L+1) ; i++)
		{	
			int counter1 = 0;	/*set counter1 to 0*/

			for (int j = (i + 1); j < (S-L+1); j++)
			{
				if (strncmp(array[i], array[j], L) == 0) /*compare the rows of 2d array and set counter1 												accordingly*/	
				{
					counter1++;
				}
			}

			if (counter1 == 0)	/*if counter 1 =0, increase counter2 by 1*/
			{
				counter2++;
			}
		}

		printf("%d", counter2);	    /*print the value of number of unique substrings*/
	}
}