#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node* left;
	struct node* right;
};

struct node* new_node(int data)
{
	struct node* node = (struct node*)malloc(sizeof(struct node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;

	return (node);
}

//Print nodes of a given binary tree using postorder traversal
void preorder_traversal(struct node* node)
{
    if (node != NULL)
    {
        printf("%d ", node->data);
        preorder_traversal(node->left);
        preorder_traversal(node->right);
    }
}

//Print nodes of a given binary tree using inorder traversal
void inorder_traversal(struct node* node)
{
    if (node != NULL)
    {
        inorder_traversal(node->left);
        printf("%d ", node->data);
        inorder_traversal(node->right);
    }
}

//Print nodes of a given binary tree using postorder traversal
void postorder_traversal(struct node* node)
{
    if (node != NULL)
    {
        postorder_traversal(node->left);
        postorder_traversal(node->right);
        printf("%d ", node->data);
    }
}

int main()
{
	struct node* root = new_node(1);
	root->left = new_node(2);
	root->right = new_node(3);
	root->left->left = new_node(4);
	root->left->right = new_node(5);

    printf("\n Preorder traversal of binary tree is \n");
    preorder_traversal(root);
 
    printf("\n Inorder traversal of binary tree is \n");
    inorder_traversal(root);
 
    printf("\n Postorder traversal of binary tree is \n");
    postorder_traversal(root);

	return 0;
}
