# Documentation for Linear Search Algorithm

# Linear Search  

Linear search (known as sequential search) is a very simple search algorithm.   
In this type of search, a sequential search is made over all items one by one.   
Every item is checked and if a match is found then that particular item is returned,   
otherwise the search continues till the end of the data collection.   

## Algorithm for linear search
Step 1: Start   
Step 2: Declare array A and variables  
Step 3: Input for array   
Step 4: Input for x ,the no. to be searched   
Step 5: Set i to 0       
Step 6: if i > n-1 then go to step 11   
Step 7: if A[i] = x then go to step 10   
Step 8: Set i to i + 1    
Step 9: Go to Step 6     
Step 10: Print Element x Found at index i and go to step 8   
Step 11: Print element not found     
Step 12: Exit   


### Time Complexity of Linear Search  

Linear Search follows the sequential access.so,the time complexity of Linear Search is **O(n)**   