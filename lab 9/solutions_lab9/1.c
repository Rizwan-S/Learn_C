#include<stdio.h>
#include<stdlib.h>
int main(int argc, char** argv)
{
	if(argc == 4)
	{	
		int num1 = atoi(argv[argc - 2]);	/*convert string to number*/
		int num2 = atoi(argv[argc - 3]);	/*convert string to number*/
		switch(*argv[argc - 1])	/*do the operations as per the input*/
		{	case '+':
			{
				printf("%d", num1 + num2);
				break;
			}
			case '-':
			{
				printf("%d", num1 - num2);
				break;
			}
			case '*':
			{
				printf("%d", num1 * num2);
				break;
			}		
			case '/':
			{
				printf("%d", num1 / num2);
				break;
			}
		}
	}
	else
	{
		return 0;
	}
}
