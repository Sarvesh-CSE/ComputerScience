#include<iostream>
using namespace std;
int main()

{
    int array[100],n,c=0  ;
    cout<<"enter the limit of your array"<<endl;
    cin>>n;
    cout<<"enter the elements one by one"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
        cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        int random=array[i];
        for(int j=0;j<n;j++)
        {
            if( random==array[j])
            {
                c++;
            }
        }
        if(random!=array[i+1])
        {
        
        cout<<"the frequency of element "<< array[i]<<"="<< c <<endl;
        }
        c=0;


    }
    return 0;
}