#include<stdio.h>
#include<stdlib.h>
 
#define MAX 5
 
int queue_array[MAX];
int front = -1;
int rear = -1;
int element;
 
void insert(int element);
int delete();
int isEmpty();
int isFull();
int peek();
void display();
 
void main()
{
        int option;
        while(1)
        {
                printf("\n1. Insert Element in Queue");
                printf("\n2. Delete Element from Queue");
                printf("\n3. Display All the Elements of Queue");
                printf("\n4. Display Element at the Front position");
                printf("\n 5. To exit the program");
                printf("\nEnter your option:\t");
                scanf("%d", &option);
                switch(option)
                {
                        case 1: printf("\nEnter Element to be Inserted:\t");
                                scanf("%d", &element);
                                insert(element);
                                break;
 
                        case 2: element = delete();
                                printf("\nDeleted Element From Queue:\t%d", element);
                                break;
            
                        case 3: display();
                                break;
 
                        case 4: printf("\nElement at Front of Queue:\t%d", peek());
                                break;
 
                        case 5: exit(1);
                }
        }
        printf("\n");
}

// Inserting an element in queue
int isFull()
{
        if(rear == MAX - 1)
                return 1;
        else
                return 0;
}

void insert(int element)
{
        if(isFull())
        {
                printf("\nQueue Overflow\n");
                return;
        }
        else if(front == -1 && rear == -1)
        {
                front = 0;
                rear = 0;
        }
        else{
        rear = rear + 1;}
        queue_array[rear] = element;
}
 
// Deletion of element from queue
int isEmpty()
{
        if(front == -1 || front == rear + 1)
                return 1;
        else
                return 0;
}

int delete()
{
        int item;
        if(isEmpty())
        {
                printf("\nQueue Underflow\n");
                return 1;
        }
        else
        {
                item = queue_array[front];
                front = front + 1;  
                return item;
        }
}
 
int peek()
{
        if(isEmpty())
        {
                printf("\nQueue Underflow\n");
                // exit(1);
        }
        else
        {
                return queue_array[front];
        }
}
 
void display()
{
        int i;
        printf("\nQueue:\n");
        if(isEmpty())
        {
                printf("\nQueue Underflow\n");
        }
        else
        {
            for(i = front; i <= rear; i++)
            {
                    printf("%d\t", queue_array[i]);
            }
        }
}