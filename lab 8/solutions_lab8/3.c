#include<stdio.h>
#include<string.h>
float sum(float a, float b);	/*function prototype for different functions*/
float sub(float a, float b);
float mul(float a, float b);
float div(float a, float b);
int main()
{
	float x, y, result;
	char operation;
	float(*ope[4])(float x, float y);	/*we create an array of function pointers*/
	ope[0] = &sum;
	ope[1] = &sub;
	ope[2] = &mul;
	ope[3] = &div;
	scanf("%f %f %c", &x, &y, &operation);	/*input the numbers and the operation to be performed*/
	switch(operation)	/*according to the input operation perform the task and store result in result variable*/
	{
		case('+'):
		{
			result = ope[0](x,y);
			break;
		}
		case('-'):
		{
			result = ope[1](x,y);
			break;
		}
		case('*'):
		{
			result = ope[2](x,y);
			break;
		}
		case('/'):
		{
			result = ope[3](x,y);
			break;
		}
	}
	printf("%.4f", result);	/*print the result*/
	return 0;
}
float sum(float a, float b)	/*function for addition*/
{
	return (a + b);
}
float sub(float a, float b)	/*function for subtraction*/
{
	return (a - b);
}
float mul(float a, float b)	/*function for multiplication*/
{
	return (a * b);
}
float div(float a, float b)	/*function for division*/
{
	if (b != 0)
	{
		return (a / b);
	}
	else
	{
		return 0;
	}
}
