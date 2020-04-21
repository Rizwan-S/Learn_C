#include<stdio.h>
#include<stdlib.h>
void add(double a1[], double a2[], int a1l1, int a2l2);	/*function prototypes*/
void multiply(double a1[], double a2[], int a1l1, int a2l2);
int maxdegree(int a, int b);
int main()
{
	int degree1, degree2;
	scanf("%d", &degree1);			/*input the degree of first polynomial*/
	double coeff1[degree1 + 1];
	for(int i = 0; i < degree1 + 1; i++)	/*input the coefficients of first polynomial*/
	{
		scanf("%lf", &coeff1[i]);
	}
	scanf("%d", &degree2);			/*input the degree of second polynomial*/
	double coeff2[degree2 + 1];
	for(int i = 0; i < degree2 + 1; i++)	/*input the coefficients of second polynomial*/
	{
		scanf("%lf", &coeff2[i]);
	}
	printf("%d ", maxdegree(degree1, degree2));	/*print the degree of addition of polynomials*/
	add(coeff1, coeff2, degree1 + 1, degree2 + 1);	/*call add function*/
	printf("\n");
	printf("%d ", degree1 + degree2);          /*print the degree of multiplication of polynomials*/
	multiply(coeff1, coeff2, degree1 + 1, degree2 + 1);	/*call multiply function*/
}

void add(double a1[], double a2[], int a1l1, int a2l2)	/*function to add two polynomials*/
{
	if (a1l1 > a2l2)
	{
		 double result[a1l1];
		 for(int i = 0; i < a1l1 - a2l2; i++)
		 {
			 result[i] = a1[i];
		 }
		 for(int i = a1l1 - a2l2; i < a1l1; i++)
		 {
			 result[i] = (a1[i] + a2[i - a1l1 + a2l2]);
		 }
		 for(int i = 0; i < a1l1; i++)
		 {
			 printf("%lf ", result[i]);	/*print the result of addition of polynommials*/
		 }
	}
	else
	{
                 double result[a1l1];
                 for(int i = 0; i < a2l2 - a1l1; i++)
                 {
                         result[i] = a2[i];
                 }
                 for(int i = a2l2 - a1l1; i < a2l2; i++)
                 {
                         result[i] = (a1[i - a2l2 + a1l1] + a2[i]);
                 }
		 for(int i = 0; i < a2l2; i++)
                 {
                         printf("%lf ", result[i]);/*print the result of multiplication of two polynomials*/
                 }
        }
}

void multiply(double a1[], double a2[], int a1l1, int a2l2)	/*function to multiply two polynomials*/
{
	double result[a1l1 + a2l2 - 1];
	for(int i = 0; i < (a1l1 + a2l2 - 1); i++)
	{
		result[i] = 0;
	}
	for(int i = 0; i < a1l1; i++)
	{
		for(int j = 0; j < a2l2; j++)
		{
			result[i + j] = result[i + j] + (a1[i]*a2[j]);
		}
	}
	for(int i = 0; i < a1l1 + a2l2 - 1; i++)
	{
		printf("%lf ", result[i]);
	}
}	

int maxdegree(int a, int b)	/*function to return the max. of two numbers*/
{
	if(a >= b)
	{
		return a;
	}
	else
	{
		return b;
	}
}