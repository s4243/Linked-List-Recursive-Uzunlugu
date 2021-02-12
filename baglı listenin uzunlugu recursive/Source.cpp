// Recursive C program to find length or count of nodes in a linked list 
#include<stdio.h> 
#include<stdlib.h> 

struct Node
{
	int data;
	struct Node* next;
};
//push ile basa eleman ekleme
void push(struct Node** head_ref, int new_data)
{
	struct Node* new_node =(struct Node*) malloc(sizeof(struct Node));
	new_node->data = new_data;

	/* eski listeyi yeni düðümden baðla */
	new_node->next = (*head_ref);

	(*head_ref) = new_node;
}

/* dizinin uzunluðu*/
int getCount(struct Node* head)
{
	
	if (head == NULL)
		return 0;
	return 1 + getCount(head->next);
}

/* Driver program to test count function*/
int main()
{
	struct Node* head = NULL;

	/* Use push() to construct below list
	1->2->1->3->1 */
	push(&head, 1);
	push(&head, 3);
	push(&head, 1);
	push(&head, 2);
	push(&head, 1);

	
	printf("count of nodes is %d", getCount(head));//dizinin uzunlugu
	return 0;
}
