// Program for inserting an element at the end of Linked List

#include<stdio.h>
#include<stdlib.h>

struct node   
{  
    int data;  
    struct node *next;   
};  
struct node *head;

void traverse_linked_list()
{
    struct node* curr;
    curr = head;
    
    int node_count = 0;
    if (curr== NULL)
        printf("There is no data available -- its all empty!!");
    else
        { 
            while (curr->next != NULL)
            {
                node_count++;
                printf(" \n Node Count: %d,  %d", node_count, curr-> data);
                curr = curr-> next;
            }
            printf(" \n Traversal is complete!! ");

        }
}

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
    traverse_linked_list(); 
}  