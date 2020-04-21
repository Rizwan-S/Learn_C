#include<stdio.h>
void addition(float real1, float complex1, float real2, float complex2);	/*function prototype for operations*/
void subtraction(float real1, float complex1, float real2, float complex2);
void multiplication(float real1, float complex1, float real2, float complex2);

struct num{			/*structure containing real and complex parts of number*/
	float real;
	float comp;
};

int main()
{
	struct num n1;
	struct num n2;
	scanf("%f %f %f %f", &n1.real, &n1.comp, &n2.real, &n2.comp);	/*input the numbers*/
	addition(n1.real, n1.comp, n2.real, n2.comp);	/*perform various operations*/
	subtraction(n1.real, n1.comp, n2.real, n2.comp);
	multiplication(n1.real, n1.comp, n2.real, n2.comp);
	return 0;
}

void addition(float real1, float complex1, float real2, float complex2)	/*function for addition*/
{
	float real = real1 + real2;
	float complex = complex1 + complex2;
	printf("%.2f + %.2fi\n", real, complex);
}

void subtraction(float real1, float complex1, float real2, float complex2)	/*function for subtraction*/
{
	float real = real1 - real2;
	float complex = complex1 - complex2;
	printf("%.2f + %.2fi\n", real, complex);
}

void multiplication(float real1, float complex1, float real2, float complex2)	/*function for multiplication*/
{
	float real = (real1 * real2) - (complex1 * complex2);
	float complex = (real1 * complex2) + (real2 * complex1);
	printf("%.2f + %.2fi\n", real, complex);
}