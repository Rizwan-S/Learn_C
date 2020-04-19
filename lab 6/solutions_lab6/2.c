#include<stdio.h>
#include<stdlib.h>
void stringcmp(char *p1, char *p2);	/*function prototype*/
int main()
{
	char *p1 = (char *)malloc(255*sizeof(char)); 
	char *p2 = (char *)malloc(255*sizeof(char));
	scanf("%s",p1);		/*input string 1*/
	scanf("%s",p2);		/*input string 2*/
	stringcmp(p1, p2);	/*calling stringcmp function*/
	free (p1);	/*free the space allocated to pointer 1*/
	free (p2);	/*free the space allocated to pointer 2*/
	return 0;
}
void stringcmp(char *p1, char *p2)
{
	int j = 0;
        for (int i = 0; i < 255; i++)
	{
		if (*(p1 + i) != *(p2 + i))
		{
			printf("%d", 1);	/*if the strings are not equal, print 1 and make j = 1*/
			j = 1;
			break;
		}
	}
	if ( j != 1)
	{
		printf("%d", 0);	/*if the strings are equal, print 0*/
	}
}
