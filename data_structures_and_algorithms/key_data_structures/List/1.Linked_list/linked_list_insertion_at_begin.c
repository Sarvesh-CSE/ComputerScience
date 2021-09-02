// Program for inserting an element at the beginning of Linked List

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

    struct node *new_node;  
    int item;  
    new_node = (struct node *) malloc(sizeof(struct node *));  

    printf("\nEnter value\n");    
    scanf("%d",&item);    
    new_node->data = item;  
    new_node->next = head;
      
    head = new_node;  
    printf("\nNode inserted");  

}