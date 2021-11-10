// To sort the elements in ascending order using Insertion Sort
#include<stdio.h>
#include<conio.h>


void main()
{
 printf("The list of elements to be sorted are hard-coded for now \n");
int input_arr[] = {3, 1, 9, 13, 6};
int size_input_arr = sizeof(input_arr)/ sizeof(input_arr[0]);
printf("NUmber of elements in input array is %d \n", size_input_arr);

printf("Before sorting, input array looks like tihs... \n ");
for ( int i = 0; i < size_input_arr; i++)
{
    printf("%d \t", input_arr[i]);
}
printf("\n \n");

for (int i = 1; i < size_input_arr; i++) 
{
    int key = input_arr[i];
    int j = i - 1;

    /* Move elements of arr[0..i-1], that are
        greater than key, to one position ahead
        of their current position */
    while (j >= 0 && input_arr[j] > key)
    {
        input_arr[j + 1] = input_arr[j];
        j = j - 1;
    }
    input_arr[j + 1] = key;
}
printf("After sorting, input array looks like tihs... \n ");
for ( int i = 0; i < size_input_arr; i++)
{
    printf("%d \t", input_arr[i]);
}

}