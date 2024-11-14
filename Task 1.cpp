#include<iostream>
using namespace std;
int main()
{
    int size, i=1, out=1;
    cout<<"Enter size of an array: ";
    cin>>size;
    int array[size]={};
    while(i<=size)
    {
        cout<<"Enter value in array "<<i<<": ";
        cin>>array[i];
        i++;
    }
    while(out<=size)
    {
        cout<<array[out]<<endl;
        out++;
    }
    return 0;
}
