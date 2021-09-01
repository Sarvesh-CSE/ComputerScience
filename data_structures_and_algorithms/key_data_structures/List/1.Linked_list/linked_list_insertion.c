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
    struct node *ptr,*temp;  
    int item;     
    ptr = (struct node*)malloc(sizeof(struct node)); 

 
    printf("\nEnter value?\n");  
    scanf("%d",&item);  
    ptr->data = item;  
    if(head == NULL)  
    {  
        ptr -> next = NULL;  
        head = ptr;  
        printf("\nNode inserted");  
    }  
    else  
    {  
        temp = head;  
        while (temp -> next != NULL)  
        {  
            temp = temp -> next;  
        }  
        temp->next = ptr;  
        ptr->next = NULL;  
        printf("\nNode inserted");  

    }  
}  