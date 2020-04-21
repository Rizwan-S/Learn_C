#include<stdio.h>
#include<string.h>
int main()
{
	FILE *fp1, *fp2, *fp;
	char c;
	fp1 = fopen("file1.txt", "r");	/*open file1 in read mode*/
	fp2 = fopen("file2.txt", "r");	/*open file2 in read mode*/
	fp = fopen("new_file.txt", "a");  /*open new_file in read mode*/
	while ((c = getc(fp1)) != EOF)	/*put data from file1 to new_file*/
	{
		fputc(c, fp);
	}
	while ((c = getc(fp2)) != EOF)	/*put file2 to file*/
	{
		fputc(c, fp);
	}
	fclose(fp1);	/*close the file*/	
	fclose(fp2);
	fclose(fp);
}
	
