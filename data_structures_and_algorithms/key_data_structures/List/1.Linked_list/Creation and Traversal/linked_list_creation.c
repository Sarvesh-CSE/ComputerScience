#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node* next;
};

// Program to create a simple linked list with 3 nodes
int main()
{
	struct node* head = NULL;
	struct node* second = NULL;
	struct node* third = NULL;
    struct node* curr = NULL;

	// allocate 3 nodes in the heap
	head = (struct node*)malloc(sizeof(struct node));
	second = (struct node*)malloc(sizeof(struct node));
	third = (struct node*)malloc(sizeof(struct node));


    head->data = 1; // assign data in first node
    head->next = second; // Link first node with second
 
    second->data = 2; // assign data to second node
    second->next = third;
 
    third->data = 3; // assign data to third node
    third->next = NULL;
 
    curr = head;
    while (curr!=NULL)
    {
        printf("%d \n", curr-> data );
        fflush(stdout); // flushes the stdout buffer
        curr = curr->next;
    }


	return 0;
}
