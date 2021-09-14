// Implementation of stack data structure using array data structure.

#include <stdio.h>

# define MAXSIZE 8

int stack_arr[MAXSIZE];     
int top = -1;            

int isempty() // to check whether stack_arr is empty or not
{
    if(top == -1)
      return 1;
    else
      return 0;
}
   
int isfull() // to check whether stack_arr is full or not
{
    if(top >= MAXSIZE)
      return 1;
    else
      return 0;
}

int peek() // to get the element present on top of the stack_arr.
{
   return stack_arr[top];
}

int pop() // to remove element from top
{
   int data;
	
   if(!isempty()) 
   {
    data = stack_arr[top];
    top = top - 1;   
    return data;
   } 
   else printf("Could not retrieve data, stack_arr is empty.\n");
}

int push(int data) // function to insert element at top
{

   if(!isfull()) {
      top = top + 1;   
      stack_arr[top] = data;
      printf("The element pushed is %d \n", stack_arr[top]);
   } else printf("Could not insert data, stack_arr is full.\n");
}

int main() 
{
   // push items on to the stack_arr 
   push(3);
   push(5);
   push(9);
   push(1);
   push(12);
   push(15);

   printf(" ----------------------------------------------\n");
   printf("Element at top of the stack_arr: %d\n" ,peek());
   printf(" ----------------------------------------------\n");

   printf("stack_arr empty: %s\n" , isempty()?"true":"false");
   printf("stack_arr full: %s\n" , isfull()?"true":"false");
   printf("Elements: \n");

   // print stack_arr data 
   while(!isempty()) {
      int data = pop();
      printf("%d\n",data);
   }
   printf("stack_arr empty: %s\n" , isempty()?"true":"false");
   printf("stack_arr full: %s\n" , isfull()?"true":"false");

   
   return 0;
}