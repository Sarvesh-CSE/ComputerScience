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
    int i,loc,item;   
    struct node *new_node, *temp;  

    printf("\nEnter element value");  
    scanf("%d",&item);
    printf("\nEnter the location after which you want to insert ");  
    scanf("\n%d",&loc); 

    new_node = (struct node *) malloc (sizeof(struct node));  
    new_node->data = item;  

 
    temp=head;  
    for(i=0;i<loc;i++)  
    {  
        temp = temp->next;  
        if(temp == NULL)  
        {  
            printf("\n can't insert\n");  
            return;  
        }  
        
    }  
    new_node ->next = temp ->next;   
    temp ->next = new_node;   
    printf("\nNode inserted");  
     
}