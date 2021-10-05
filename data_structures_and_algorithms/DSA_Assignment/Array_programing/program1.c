//Program to eliminate duplicate objects from a given array.

#include<stdio.h>
int main()
{
    int a[50];
    int size,i,j,k;
    printf("enter the size of array\n");
    scanf("%d",&size);
    printf("enter the elements\n");
    for(i=0;i<size;i++)
    {
         scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++)
    {  for(j=i+1;j<size;j++)
        { if(a[j]==a[i])
            {for(k=j;k<size;k++)
               {
                    a[k]=a[k+1];
               }
                size--; 
                j--;
            }
        }
     }
    printf("after deletion");
    for(i=0;i<size;i++)
    {
         printf("%d\t",a[i]);  
    }
      return 0;
}