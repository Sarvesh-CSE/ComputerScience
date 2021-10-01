// Program to find the second largest element in an array without using sorting.


#include <stdio.h>
 int main()
{
	int arr[50], i, Size;
	int first_b, second_b;
	
	printf("\n Please Enter the Number of elements in an array  :  ");
	scanf("%d", &Size);
	
	printf("\n Please Enter %d elements of an Array \n", Size);
	for (i=0; i < Size; i++)
	{
		scanf("%d", &arr[i]);
    }
	 
	first_b = second_b = arr[0];  
	   
	for (i = 1; i < Size; i++)
	{
		if(arr[i] > first_b)
		{
			second_b = first_b;
			first_b = arr[i];
		}
		else if(arr[i] > second_b && arr[i]!=first_b)
		{
			second_b = arr[i];
		}	
	}
	printf("\n The Largest Number in this Array =  %d", first_b);
	printf("\n The Second Largest Number in this Array =  %d", second_b);
	
	return 0;
}