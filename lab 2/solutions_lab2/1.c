#include<stdio.h>
int main()
{
	int x, y, min, max, z;
	scanf("%d %d", &x, &y);
	if (x<0)
	{
		x = (-x);
	}
	if (y<0)
	{
		y = (-y);
	}
	if(x==0 && y==0)
		{
		        printf("Invalid input");
		}
	else
	{
		if(x>y)
		{
			max = x;
			min = y;
		}
		else
		{
			max = y;
			min = x;
		}
		while(min!=0)
		{
			z = max%min;
			max = min;
			min = z;
		}
		printf("%d", max);
	}
return 0;
}

	
		

