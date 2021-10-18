#include<iostream>
#include<conio.h>
using namespace std;
int main()

{
    int array[100],n,real[100];
    cout<<"enter the limit of your array"<<endl;
    cin>>n;
    for(int i=0;i<100;i++)
    {
        array[i]=0;
    }
    cout<<"enter the elements one by one"<<endl;
    for(int j=0;j<n;j++)
    {
        cin>>real[j];
        cout<<endl;
    }
    cout<<"the required output -"<<endl;
    for( int t=0;t<n;t++)
    {
      int temp= real[t];

     
      if(array[temp]==0 )
      {
          array[temp]=1;

          cout<<temp<<endl;
      }
    }
    return 0;
    getch();
}
