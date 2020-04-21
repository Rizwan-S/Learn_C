#include<stdio.h>
#include<stdarg.h>
#include<string.h>

void minprint(char *string, ...); /*function prototype*/

int main()
{
	int a = 10;
	char s = 'a';
	minprint("%d\n",a);
	minprint("%c", s);
	return 0;
}

void minprint(char *string, ...)	/*minprint function that takes variable number of arguments*/
{
	va_list ap;
	char *p, *ch;
	int ival;
	va_start(ap, string);
	for(p = string; *p; p++)	
	{
		if((*p) != '%')		
		{
			putchar(*p);
			continue;
		}
		switch(*++p)
		{
			case 'd':	 	/*if it is an integer, do this*/
			{
				ival = va_arg(ap, int);
				char string[100];
				sprintf(string, "%d", ival);	/*convert int to string*/
			    for(ch = string; *ch; ch++)
			    {
			    	putchar(*ch);	/*output on screen*/
			    }
				break;
			}
			case 'c':	 	/*in case of character, do this*/
			{
				ival = va_arg(ap, int);
				putchar(ival);	/*output on screen*/
				break;
			}
		}
	}
	va_end(ap);
}