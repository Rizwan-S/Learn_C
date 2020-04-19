#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, i;
    scanf("%d ", &n);	/*input the number of integers*/
    int *p = (int *)malloc(n*sizeof(int));
    for (i = 0; i < n; i++)
    {
        scanf(" %d", (p + i));	/*input the integers*/
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(p + i));	/*print the integers*/
    }  
    free(p);		/*free the space allocated to the pointer*/
}
