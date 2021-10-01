//Program to count the frequency of each element in an array. 

#include <stdio.h>
 
int main()
{
	int arr[10], FreqArr[10], i, j, Count, Size;
	
	printf("\n Please Enter Number of elements in an array  :   ");
	scanf("%d", &Size);
	
	printf("\n Please Enter %d elements of an Array  :  ", Size);
	for (i = 0; i < Size; i++)
	{
    	scanf("%d", &arr[i]);
    	FreqArr[i] = -1;
   	}     
 
	for (i = 0; i < Size; i++)
	{
		Count = 1;
		for(j = i + 1; j < Size; j++)
		{
    		if(arr[i] == arr[j])
    		{
    			Count++;
    			FreqArr[j] = 0;
    		}
    	}
    	if(FreqArr[i] != 0)
    	{
    		FreqArr[i] = Count;
		}
	}

 	printf("\n Frequency of All the Elements in this Array are : \n");
 	for (i = 0; i < Size; i++)
  	{
  		if(FreqArr[i] != 0)
  		{
  			printf("%d Occurs %d Times \n", arr[i], FreqArr[i]);
		}		
  	}	     
 	return 0;
}