#include<stdio.h>
#include<stdlib.h>
int main(int argc, char **argv)
{
	int sum = 0;
	for(int i = 0; i < argc; i++)	/*make the sum of integers of command line*/
	{
		sum += atoi(argv[i]);
	}
	printf("%d %d", argc - 1, sum);	/*print number of integers and their sum*/
	return 0;
}
