#include<stdio.h>
#include<conio.h>
#include<string.h>
void push(char);
char pop();
main()
{
int i, len ;
char str[50] , ele ;
printf("enter the string");
scanf("%s",str);
len = strlen(str);
for (i=0 ; i<len; i++) 
    {
        push(str[i]);
    }
for (i=0 ; i<len ; i++)
    {
        if(str[i]!=pop())
        break;
    }    
if(i==len)
printf("string is palindrome");
else
printf("string is not palindrome");
}
char str[50]={'\0'},top=-1 ;
void push (char ele)
{
    top= top+1;
    str[top]= ele ;
}
char pop()
{
    char ele;
    ele = str[top];
    str[top]='\0';
    top = top-1;
    return ele ;
}