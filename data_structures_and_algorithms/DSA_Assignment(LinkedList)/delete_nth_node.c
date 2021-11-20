// C Program to delete a node at nth position of the linked list
#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
}*head;

void create(int n);
void deleteNode(int pos);
void display();

int main()
{
	int n,pos;
	printf("Enter number of nodes you want in the linked list\n");
	scanf("%d",&n);
	create(n);

	printf("the list intially has elements\n");
	display();
	printf("Enter position of the node to be deleted: ");
	scanf("%d",&pos);
	deleteNode(pos);
	printf("The updated list contains elements\n");
	display();

	return 0;
}

void create(int n)
{
	struct node *newnode, *temp;
	int data,i;
	head=(struct node*)malloc(sizeof(struct node));

	printf("Enter data in node 1: ");
	scanf("%d",&data);

	head ->data=data;
	head->next=NULL;

	temp=head;

	for(i=2;i<=n;i++)
	{
		newnode=(struct node*)malloc(sizeof(struct node));

		printf("Enter data of node %d: ",i);
		scanf("%d",&data);

		newnode->data=data;
		newnode->next=NULL;

		temp->next=newnode;
		temp=temp->next;
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
	     printf("%d\n",temp->data);
	     temp=temp->next;
	   }
	 }
	getch();
}

void deleteNode(int pos)
{
	int i;
	struct node *del,*prevNode;

	if(head==NULL)
	   printf("the list is empty");

	else
	{
		del=head;
		prevNode=head;

		for(i=2;i<=pos;i++)
		{
			prevNode=del;
			del=del->next;

			if(del==NULL)
			   break;
		}
		if(del!=NULL)
		{
			if(del==head)
			   head=head->next;
			prevNode->next=del->next;
			del->next=NULL;

			/*delete nth node*/
			free(del);
		}
		else
		 printf("invalid position of node");
	}
}