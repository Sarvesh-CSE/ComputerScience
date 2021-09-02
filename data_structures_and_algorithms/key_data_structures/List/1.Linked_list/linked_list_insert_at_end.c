// Program for inserting an element at the end of Linked List

#include<stdio.h>
#include<stdlib.h>

struct node   
{  
    int data;  
    struct node *next;   
};  
struct node *head;

void main()
{
    struct node *temp, *new_node;  
    int item;     
    printf("\nEnter value?\n");  
    scanf("%d",&item);

    new_node = (struct node*)malloc(sizeof(struct node));   
    new_node->data = item;  
    new_node -> next = NULL; 

    if(head == NULL)  
        head = new_node;  
    else  
    {  
        temp = head;  
        while (temp -> next != NULL){ 
            temp = temp -> next; } 
        temp->next = new_node;  
    }
        printf("\n Node inserted at the end with value %d", new_node->data);
  
}  