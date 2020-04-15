#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d",&a,&b);
	if(a<=0 || b<=0)
	{
		printf("Invalid input");
	}
	else 
	{if(a>=b)
	{c=a%b;}
	else
	{c=b%a;}
	printf("%d",c);}
	return 0;
}

