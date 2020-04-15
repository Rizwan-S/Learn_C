/*
input = the values of coordinates of center of circle 1 (x1, y1), circle 2 (x2, y2), 
	radius of circle 1 (r1) and radius of circle 2(r2);
method = found out the distance between the circles using distance formula and then shown the output accordingly;
output = if the circles intersect or touch each other, the output shown is YES and if they don't touch each other, the output is 		 NO. If the value of radius entered is negative, it will show Invalid input;
*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
	int x1, x2, y1, y2, r1, r2;
	float distance_btw_centers;

	scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &r1, &r2);

	if ( r1 >= 0 && r2 >= 0)
	{
		distance_btw_centers = sqrt((( x2 - x1)*( x2 - x1)) + (( y2 - y1)*( y2 - y1)));

		if ( distance_btw_centers > (r1 + r2) || distance_btw_centers < abs(r2 - r1))
		{
			printf("NO");
		}

		else
		{
			printf("YES");
		}
	}

	else
	{
		printf("Invalid input");
	}

	return 0;
}
