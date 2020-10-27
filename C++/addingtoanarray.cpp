#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10,0};
    int index=0;
    int no_elements=10;
    int pos=0;
    cout<<"the array is"<<endl;
    for(index=0;index<no_elements;index++)
    {
        cout<<a[index]<<",";
    }
    cout<<endl;
    cout<<"enter pos to add digit"<<endl;
    cin>>pos;
    int no_toadd=0;
    cout<<"enter no to add in list"<<endl;
    cin>>no_toadd;
    for(int index=9;index>=pos;index--)
    {
        a[index+1]=a[index];
    }
    a[pos]=no_toadd;
   no_elements++;
    for(index=0;index<no_elements;index++)
    {
        cout<<a[index]<<",";
    }
    cout<<endl;
    return 0;
}

