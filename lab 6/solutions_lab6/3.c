#include<stdio.h>
#include<stdlib.h>
void stringconcatenate(char *s1,char *s2);	/*function prototype*/
int main(void)
{
	char *s1 = (char*)malloc(265* sizeof(char)); 	
	char *s2 = (char*)malloc(265* sizeof(char));
	scanf("%s %s", s1, s2);	/*input the two strings*/
	stringconcatenate(s1,s2);	/*call stringconcatenate function*/
	return 0;
}
void stringconcatenate(char *s1,char *s2)	/*stringconcatenate function*/
{
	int i, j;
	char *string=(char*)malloc(530* sizeof(char));
	for(i = 0; i < 265; i++)
	{
		if(*(s1 + i) == '\0')
		{
			break;	/*if the string ends, stop the loop*/
		}
		else
		{
			*(string + i) = *(s1 + i);	/*copy the string s1 to string*/	
		}
	}
	for(j = 0; j < 265; j++)
	{
		if(*(s2 + j) == '\0')
		{
			*(string + i) = '\0';	/*if the string ends, stop the loop*/
			break;
		}
		else
		{
			*(string + i) = *(s2 + j);	/*copy the second string at the end of first string*/
		}
		i++;
	}
	printf ("%s", string);	/*print the concatenated string*/
}
