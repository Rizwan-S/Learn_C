#include<stdio.h>
int main(void)
{
	int radius;
	float area;
	scanf("%d", &radius);
	if (radius<0)
	{
		printf("Invalid input");
	}
	else 
	{
		area=3.14*radius*radius;
		printf("%.2f", area);
	}
	return 0;
}

