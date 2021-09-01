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

    struct node *ptr;  
    int item;  
    ptr = (struct node *) malloc(sizeof(struct node *));  

    printf("\nEnter value\n");    
    scanf("%d",&item);    
    ptr->data = item;  
    ptr->next = head;  
    head = ptr;  
    printf("\nNode inserted");  

}