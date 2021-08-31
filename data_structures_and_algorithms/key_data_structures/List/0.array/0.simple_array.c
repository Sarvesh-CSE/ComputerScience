#include <stdio.h>
int main()
{
    int my_first_array_variable[5] = {10, 20, 30, 40, 50};
    printf("Which element do you want to fetch - index please? \n");
    printf("Can I get one at index 4?  \n");
    printf("Element at index %d  is %d", 4, my_first_array_variable[4] );
    return 0;
}