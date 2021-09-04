#include <stdio.h>

int MAXSIZE = 8;       
int stack[8];     
int top = -1;            

int isempty() // to check whether stack is empty or not
{
    if(top == -1)
      return 1;
    else
      return 0;
}
   
int isfull() // to check whether stack is full or not
{
    if(top == MAXSIZE)
      return 1;
    else
      return 0;
}

int peek() // to get the element present on top of the stack.
{
   return stack[top];
}

int pop() // to remove element from top
{
   int data;
	
   if(!isempty()) 
   {
    data = stack[top];
    top = top - 1;   
    return data;
   } 
   else printf("Could not retrieve data, Stack is empty.\n");
}

int push(int data) // function to insert element at top
{

   if(!isfull()) {
      top = top + 1;   
      stack[top] = data;
   } else printf("Could not insert data, Stack is full.\n");
}

int main() 
{
   // push items on to the stack 
   push(3);
   push(5);
   push(9);
   push(1);
   push(12);
   push(15);

   printf("Element at top of the stack: %d\n" ,peek());
   printf("Elements: \n");

   // print stack data 
   while(!isempty()) {
      int data = pop();
      printf("%d\n",data);
   }

   printf("Stack full: %s\n" , isfull()?"true":"false");
   printf("Stack empty: %s\n" , isempty()?"true":"false");
   
   return 0;
}