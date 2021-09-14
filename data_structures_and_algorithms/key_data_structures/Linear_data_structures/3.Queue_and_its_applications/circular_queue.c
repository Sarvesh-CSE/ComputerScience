// Circular Queue implementation in C

#include <stdio.h>

#define CAPACITY 5

int circ_queue_arr[CAPACITY];
int front = -1, rear = -1;

// Check if the queue is full
int isFull() {
  if ((rear+1)% CAPACITY == front) // (front == rear + 1) || (front == 0 && rear == CAPACITY - 1)
  {
    return 1;}
  return 0;
}

// Check if the queue is empty
int isEmpty() {
  if (front == -1 && rear == -1)
    return 1;
  return 0;
}

// Adding an element
void enQueue(int element)
{
  if (isFull())
    printf("\n Queue is full!! \n");
  else if (front == -1 && rear == -1) 
    {
    front = 0;
    rear = 0;
    }
    else rear = (rear + 1) % CAPACITY;

    circ_queue_arr[rear] = element;
    printf("\n Inserted -> %d", element);
}

// Removing an element
int deQueue() {
  int element;
  if (isEmpty())
    printf("\n Queue is empty !! \n");
  else {
    element = circ_queue_arr[front];
    if (front == rear) {
      front = -1;
      rear = -1;
    } 
    // Q has only one element, so we reset the 
    // queue after dequeing it. ?
    else {
      front = (front + 1) % CAPACITY;
    }
    printf("\n Deleted element -> %d \n", element);
    return (element);
  }
}

// Display the queue
void display() {
  int i;
  if (isEmpty())
    printf(" \n Empty Queue\n");
  else {
    printf("\n Front -> %d ", front);
    printf("\n circ_queue_arr -> ");
    for (i = front; i != rear; i = (i + 1) % CAPACITY) {
      printf("%d ", circ_queue_arr[i]);
    }
    printf("%d ", circ_queue_arr[i]);
    printf("\n Rear -> %d \n", rear);
  }
}

int main() {
  // Fails because front = -1
  deQueue();

  enQueue(1);
  enQueue(2);
  enQueue(3);
  enQueue(4);
  enQueue(5);

  // Fails to enqueue because front == 0 && rear == CAPACITY - 1
  enQueue(6);

  display();
  deQueue();

  display();

  enQueue(7);
  display();

  // Fails to enqueue because front == rear + 1
  enQueue(8);

  return 0;
}