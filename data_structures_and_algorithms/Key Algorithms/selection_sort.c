// To sort the elements in ascending order using Selection Sort
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


for (int i = 0; i< size_input_arr-1; i++)
{   
    int min_element_index = i;
    for (int j= i+1; j<size_input_arr; j++ )
    {
        if(input_arr[j]<input_arr[min_element_index])
        {
            min_element_index = j;
        }
    }
    if(min_element_index!=i)
    {
        int temp = input_arr[i];
        input_arr[i] = input_arr[min_element_index];
        input_arr[min_element_index] = temp;
    }
}

printf("After sorting, input array looks like tihs... \n ");
for ( int i = 0; i < size_input_arr; i++)
{
    printf("%d \t", input_arr[i]);
}


}