#include <stdio.h>
#include <stdlib.h>

/* Structure definition */
struct node 
{
	int data;
	struct node* next;	
};

struct node* get_node()
{
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	return temp;
}

struct node* insert_node( struct node* head, int x, int pos)
{
	struct node *temp, *current;
	int i = 0;
	
	current = head;
	
	temp = get_node();
	
	temp->data = x;
	temp->next = NULL;
	
	for (i=1;i<(pos-1);i++)
	{
		current = current->next;
	}
	
	temp->next = current->next;
	current->next = temp;
	return head;	
}

int main()
{
	struct node* head, *second, *third, *current;
	int x,pos;
	
	head 	= NULL;
	second 	= NULL;
	third	= NULL;
	
	head 	= (struct node*) malloc(sizeof(struct node));
	second 	= (struct node*) malloc(sizeof(struct node));
	third 	= (struct node*) malloc(sizeof(struct node));
	
	head->data 	= 1;
	head->next	= second;
	
	second->data 	= 2;
	second->next	= third;
	
	third->data 	= 4;
	third->next		= NULL;
	
	printf("Enter element to be added\n");
	scanf("%d",&x);
	printf("Enter the position to Insert\n");
	scanf("%d",&pos);
	
	insert_node(head,x,pos);
	
	current = head;
	
	while (current->next != NULL)
	{
		printf("%d\t",current->data );
		current = current->next;
	}
	
	printf("%d", current->data);
}