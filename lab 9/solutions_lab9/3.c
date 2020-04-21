#include<stdio.h>
struct data{	/*structure containing data of students*/
	char name[100];
	char roll_no[100];
	int age;
	int marks;
};
int main()
{
	int n;
	scanf("%d\n", &n);	/*input the number of students*/
	struct data array[n];	/*array of structure*/
	for(int i = 0; i < n; i++)	/*input the details of students*/
	{
		scanf("%s", array[i].name);
		scanf("%s", array[i].roll_no);
		scanf("%d", &array[i].age);
		scanf("%d", &array[i].marks);
	}
	for(int i = 0; i < n; i++)	/*print the details of students*/
        {       
                printf("%s\n", array[i].name);
                printf("%s\n", array[i].roll_no);
                printf("%d\n", array[i].age);
                printf("%d\n", array[i].marks);
        }
	return 0;
}
