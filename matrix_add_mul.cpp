//REVATHI OC
//23070123105
#include<iostream>
using namespace std;
int main()
{
    cout<<"2.2D-Array, addition & multiplication of matrix "<<endl;
    int a,b,a1,b1,i,j;
    cout<<"Enter number of rows of 1st matrix: ";
    cin>>a;
    cout<<"Enter number of columns of 1st matrix: ";
    cin>>b;
    cout<<"Enter number of rows of 2nd matrix: ";
    cin>>a1;
    cout<<"Enter number of columns of 2nd matrix: ";
    cin>>b1;
    int arr[a][b],arr1[a1][b1],sum[a][b];
    cout<<"Enter elements of 1st array: "<<endl;
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            cout<<"Enter element "<<i<<j<<": ";
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    cout<<"Enter elements of 2nd array: "<<endl;
    for(i=0;i<a1;i++)
    {
        for(j=0;j<b1;j++)
        {
            cout<<"Enter element "<<i<<j<<": ";
            cin>>arr1[i][j];
        }
        cout<<endl;
    }
     if(a==a1 & b==b1)
     {
        for(i=0;i<a1;i++)
    {
        for(j=0;j<b1;j++)
        {
           sum[i][j]=arr[i][j]+arr1[i][j];
        }
    }
    cout<<"The addition of both the matrices are: "<<endl;
        for(i=0;i<a1;i++)
    {
        for(j=0;j<b1;j++)
        {
          cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
    
     }
     else{
        cout<<"The matrix cannot be added"<<endl;
     }
      
      if(b==a1)
      {
        cout<<"The multiplication of matrix is: "<<endl;
        int m[a][b1];
        for(i=0;i<a;i++)
        {
            for(j=0;j<b1;j++)
            {
                m[i][j]=arr[i][j]*arr1[j][i];
                cout<<m[i][j]<<" ";
            }
            cout<<endl;
        }
      }
      else{
        cout<<"The matrix cannot be multiplied";
      }
      return 0;
}