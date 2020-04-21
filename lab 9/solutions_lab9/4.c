#include<stdio.h>
#include<stdlib.h>

typedef struct node	/*structure to create linked list*/
{
	int data;
	struct node *next;
}node;

node* createList(int n);	/*functions to create linked list and display linked list of all and even terms*/
void displayList(node* head);
void evenList(node** head);
void deleteNode(node* p);	/*function to make linked list of even terms*/

int main()
{
	int n;
	node* HEAD = NULL;
	scanf("%d", &n);	/*input the number of integers*/
	HEAD = createList(n);	/*create linked list*/
	displayList(HEAD);	/*display the linked list*/
	evenList(&HEAD);	/*create linked list of even terms*/
	displayList(HEAD);	/*display list of even integers*/
	return 0;
}


node* createList(int n)	/*function to create linked list*/
{
	node* head = NULL;
	node* temp = NULL;
	node* p = NULL;
	for(int i = 0; i < n; i++)	/*create individual node*/
	{
		temp = (node*)malloc(sizeof(node));
		scanf("%d", &(temp->data));
		temp->next = NULL;

		if(head == NULL)	/*if list is empty make temp as first node*/
		{
			head = temp;
		}
		else
		{
			p = head;
			while(p->next != NULL)	/*move to next element of list until reaches end of list*/
			{
				p = p->next;
			}
			p->next = temp;	/*store new element at the end of linked list*/
		}
	}
	return head;
}

void displayList(node * head)	/*function to display linked list*/
{
	node* p = head;
	while(p != NULL)
	{
		printf("%d-->", p->data);
		p = p->next;
	}
	printf("%s\n", "NULL");
}

void evenList(node **head)	/*function to make a linked list of even integers*/
{
	if(*head != NULL)	
	{
		node *temp = *head, *middle = *head;
		while(temp)
		{
			if(temp->data % 2 != 0)		/*do if the number is odd*/
			{
				if(temp == *head)	/*remove first node of linked list*/	
				{
					middle = temp;		/*make middle as head */
					*head = (*head)->next;	/*move to next node*/
					temp = *head;		
					middle->next = NULL;	
					free(middle);		/*free node*/
					middle = NULL;
				}
				else
				{
					middle->next = temp->next;
					temp->next = NULL;
					free(temp);
					temp = middle->next;
				}
			}
			else				/*do if number is even*/
			{
				middle = temp;	
				temp = temp->next;
			}
		}
	}
}
