#include<stdio.h>
#include<math.h>
int main()
{
	int m, n, i, j, counter;
	scanf("%d", &n);
	if (n>1)
	{
		m = sqrt(n);
		counter = 0;
		int prime[n+1];
		{
			for(i=2; i<=n; i++)
			{
				prime[i]=0;
			}
			prime[0] = 1;
			prime[1] = 1;
			for(i=2; i<(m+1); i++)
			{
				for(j=2;(i*j)<=n; j++)
				{
					prime[i*j] = 1;
				
				}
			}
			for(i=2 ; i<=n; i++)
			{
				if(prime[i]==0)
				{
					counter++;
				}
			}
		}
	printf ("%d", counter);
	}
	else
	{
	printf("0");
	} 
}	
