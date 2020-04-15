#include<stdio.h>
#include<math.h>
int main()
{
double a, b, c, D, e, root1, root2, d , f;
scanf("%lf %lf %lf", &a, &b, &c);
D=(b*b)-(4*a*c);
if (D>=0)
{
d=sqrt(D);
root1=(d-b)/(2*a);
root2=(-b-d)/(2*a);
printf("%.2lf ", root1);
printf("%.2lf", root2);
}
else
{
e=(-D);
f=(sqrt(e))/(2*a);
root1=(-b)/(2*a);
printf("%.2lf+i%.2lf ", root1, f);
printf("%.2lf-i%.2lf", root1, f);
}
return 0;
}
