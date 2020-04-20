#include<stdio.h>
#include<stdlib.h>
char* itob(int n, char *s, int b);	/*function prototype*/
char convertor(int n);
int main()
{
	int n, b;
	char *s = (char*)malloc(1000*sizeof(char));
	scanf("%d %d", &n, &b);		/*input the number and the base to convert the number to that base system*/
	printf("%s", itob(n, s, b));	/*print the converted number*/
	return 0;
}
char* itob(int n, char *s, int b)	/*function to convert number to another base system*/
{
	char digit;
	char *result = (char*)malloc(1000*sizeof(char));
	int remainder, count, i = 0, j = 0;
	while(n != 0)			/*this will convert the number and store result in reverse order*/
	{
		remainder = n % b;
		n = n / b;
		digit = convertor(remainder);	/*this will call a function to convert remainder to alphabets(if > 9)*/
		*(result + i) = digit;
		i++;
	}
	count = i;
	for (j = 0; j < count; j++)	/*this will reverse the reversed result*/
	{
		i--;
		*(s + j) = *(result + i);
	}
	return s;
}
char convertor(int n)	/*function to convert a number to alphabet using ascii*/
{
	char digit;
	if(n <= 9)
	{
		digit = 48 + n;
	}
	else
	{
		digit = 87 + n;
	}
	return digit;
}