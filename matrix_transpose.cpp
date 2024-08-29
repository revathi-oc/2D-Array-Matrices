//REVATHI OC
//23070123105
#include<iostream>
using namespace std;
int main()
{
    cout<<"4.2D-Array, Transpose of a matrix"<<endl;
    int i,j,a,b;
    cout<<"Enter the rows and columns matrix for matrix: ";
    cin>>a>>b;
    int arr[a][b],s=0,s1=0,trans[b][a];
   
   cout<<"Enter the values of matrix: "<<endl;
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
           cout<<"Enter element "<<i<<j<<":  ";
           cin>>arr[i][j];
           trans[j][i]=arr[i][j];
        }
    }
    cout<<"The original matrix is: "<<endl;
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;}
        cout<<"transposed matrix is: "<<endl;
        for(i=0;i<b;i++)
    {
        for(j=0;j<a;j++)
        {
            cout<<trans[i][j]<<" ";
        }
        cout<<endl;}
return 0;

}