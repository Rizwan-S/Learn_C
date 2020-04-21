#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char c;
	FILE *fp1, *fp2;
	system("date>file1.txt");	/*store time in file1*/
	system("sleep 5");	/*wait for 5 seconds*/
	system("date>file2.txt");	/*store time in file2*/
	fp1 = fopen("file1.txt", "r");	/*open files in read mode*/
	fp2 = fopen("file2.txt", "r");
	while((c = fgetc(fp1)) != EOF)	/*read data from file1*/
	{
        	printf("%c", c);
     	}
	while((c = fgetc(fp2)) != EOF)	/*read data from file2*/
	{
        	printf("%c", c);
     	}
	fclose(fp1);	/*close the files*/
	fclose(fp2);	
}
