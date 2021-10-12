// C Program to delete last node of a linked list
#include<stdio.h>
#include<stdlib.h>

/* structure of Node */
struct node
{
	int data;
	struct node *next;  //for address part of node
}*head;

void create(int n); // function to create linked list
void deleteEndNode(); // function to delete the last node
void display(); // function for displaying the linked list

int main()
{
	int n;

	// create linked list for n nodes
	printf("Enter number of nodes you want in the linked list");
	scanf("%d",&n);
	create(n);

    //display inital linked list
	printf("the list intially has elements");
	display();

    // delete last node
	deleteEndNode();

    // display updated linked list
	printf("The updated list contains elements");
	display();

	return 0;
}

void create(int n)
{
	struct node *newnode, *temp;
	int data,i;
	head=(struct node*)malloc(sizeof(struct node));

	printf("Enter data in 1st node");
	scanf("%d",&data);

	head ->data=data;
	head->next=NULL;

	temp=head;

	for(i=2;i<=n;i++)
	{
		//input data of nodes from user
		newnode=(struct node*)malloc(sizeof(struct node));

		printf("Enter data of node %d: ",i);
		scanf("%d",&data);

		newnode->data=data;//data field of node stores value of 'data'
		newnode->next=NULL;//link address field to NULL

		temp->next=newnode; //link previous node(temp) to the new node (newnode)
		temp=temp->next;//move to the next node
	}
}

void deleteEndNode()
{
	struct node *del/*for last node*/,*ptr/*for 2nd last node*/;
	if(head==NULL)
		printf("List is empty");
	else
	{
		del=head;
		ptr=head;
		// Traverse to the last node of the list
		while(del->next != NULL)
		{
		    ptr=del;
		    del=del->next;
		}

		if(del==head)
		 head=NULL;
		else
		 ptr->next=NULL;//disconnect 2nd last node from the last node

		free(del);//delete the last node
	}
}
void display()
{
	struct node *temp;

	if(head==NULL)
	  printf("list is empty");
	else
	 {
	   temp=head;
	   while(temp!=NULL)
	   {
	     printf("%d\n",temp->data);//print data of current node
	     temp=temp->next;//move to the next node
	   }
	 }
	getch();
}