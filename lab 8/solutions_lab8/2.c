#include<stdio.h>
#include<stdlib.h>
int strend(char *s, char *t);	/*function prototype*/
int main()
{
	char *input = (char*)malloc(256*sizeof(char));
	char *find = (char*)malloc(256*sizeof(char));
	scanf("%s", input); /*input the two strings from which we have to find occurance of one string at end of other string*/
	scanf("%s", find);
	int result = strend(input,find);
	if (result == 1)
	{
		printf("%s", find);	/*if the string is found, print the string*/
	}
	else
	{
		printf("%d", result);	/*if string is not found, print 0*/
	}
	return 0;
}
int strend(char *s, char *t)
{
	int i = 0, j = 0;
	for(i = 0; i < 256; i++)	/*this loop will count number of characters in string 1*/
	{
		if(*(s + i) == '\0')
		{
			break;
		}
	}
	int count1 = i;
	for(i = 0; i < 256; i++)	/*this loop will count number of characters in string 2*/
	{
		if(*(t + i) == '\0')
		{
			break;
		}
	}
	int count2 = i;
	for(i = count1 - count2 ; i < count1; i++)	/*this loop will find whether string 2 occurs at end of string 1 or not*/
	{
		if(*(s + i) != *(t + i - count1 + count2))  /*if any character of the two strings doesn't match, return 0*/
		{	
			j = 1;
			return 0;
		}
	}
	if(j != 1)	/*if the all the characters of string matches, return 1*/
	{
		return 1;
	}
}
