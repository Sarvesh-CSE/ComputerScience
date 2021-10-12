#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],f[50],i,j,count,size;
printf("enter the size of an array\n");
scanf("%d",&size);
printf("enter the elements of an array\n");
for(i=0 ; i< size ; i++)
scanf("%d\n",&a[i]);
f[i]= -1;
for ( i=0 ; i<size ; i++)
{
    count= 1;
    for( j= i+1 ; j< size ; j++)
    {
        if ( a[i]==a[j])
        {
            count++;
            f[j]=0;
        
        }
    }
    if(f[i]!=0)
    f[i]= count;
} 
for(i=0 ; i< size ; i++)
if (f[i]!=0)
{
    printf("%d %d", a[i],a[j]);
} 
getch();      
}