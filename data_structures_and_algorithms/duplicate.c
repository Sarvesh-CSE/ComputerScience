#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,size,a[50] ;
printf("enter the size of an array\n");
scanf("%d",&size);
printf(" enter the elements of an array\n");
for(i=0 ; i< size ; i++)
scanf("%d\n",&a[i]);
for (i=0 ; i< size ; i++)
    {
        for (j=i+1 ; j< size ; j++)
        if (a[i]==a[j])
        {
            printf("duplicate element %d\n",a[i]);
        }
    }
getch();    
}