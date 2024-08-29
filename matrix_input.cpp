//REVATHI OC
//23070123105
#include<iostream>
using namespace std;
int main()
{
    cout<<"1.2D-Array, matrix input"<<endl;
    int i,j,a,b;
    cout<<"Enter number of rows: ";
    cin>>a;
    cout<<"Enter number of columns: ";
    cin>>b;
    int arr[a][b];
    cout<<"Enter the elements of array: "<<endl;
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            cout<<"Enter element "<<i<<j<<":  ";
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    cout<<"The matrix is :"<<endl;
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
    }