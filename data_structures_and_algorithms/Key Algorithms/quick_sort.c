#include<stdio.h>
void quicksort(int number[25],int first,int last){
   if(first<last){
        int pivot_index = partition(number, first, last);
        quicksort(number,first,pivot_index-1);
        quicksort(number,pivot_index+1,last);

   }
}

int partition(int number[25],int first,int last)
{
    int i, j, temp;
    if(first<last){
      int pivot =first;
      i=first;
      j=last;

      while(i<j){
         while(number[i]<=number[pivot] && i<last)
            i++;
         while(number[j]>number[pivot])
            j--;
         if(i<j){
            temp=number[i];
            number[i]=number[j];
            number[j]=temp;
         }
      }

      temp=number[pivot];
      number[pivot]=number[j];
      number[j]=temp;
   }
   return j;
}

int main(){
   int count, number[25];
   int pivot, first, last;

   printf("How many elements are you going to enter? \t ");
   scanf("%d",&count);

   printf("Enter %d elements: ", count);
   for(int i=0;i<count;i++)
      scanf("%d",&number[i]);

   quicksort(number,0,count-1);

   printf("Order of Sorted elements: ");
   for(int i=0;i<count;i++)
      printf(" %d",number[i]);

   return 0;
}
