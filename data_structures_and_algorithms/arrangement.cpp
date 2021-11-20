#include<iostream>
using namespace std;
int main()

{
    int array[100],n,lar,lar2,tem;
    cout<<"enter the limit of your array"<<endl;
    cin>>n;
    cout<<"enter the elements one by one"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
        cout<<endl;
    }
   
    
        if(array[0]>array[1])
        {
             lar=array[0];
    lar2=array[1];

        }
        else
        {
             lar=array[1];
    lar2=array[0];
        }
    for(int j=2;j<n;j++)
    {
        if(array[j]>lar)
        {
             tem=lar;
            lar=array[j];
            lar2=tem;
        }
        else if(array[j]>lar2)
        {
            lar2=array[j];
        }
    }
cout<<"the largest number ="<<lar<<endl;
cout<<"the second largest number ="<<lar2<<endl;
return 0;
}

    