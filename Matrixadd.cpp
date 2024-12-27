//ASG-6
//1) Write a C++ program to perform matrix addition.
#include <iostream>
using namespace std;
int main()
{   int r,c,i,j;
     cout<<"MATRIX ADDITION"<<endl<<endl;
     cout<<"Enter number of rows and columns: ";
     cin>>r>>c;
    int a[r][c],b[r][c],Sum[r][c];
     cout<<"Enter elements of first matrix:\n";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>a[i][j];
            cout<<" ";
        }
        cout<<endl;
    }
    cout<<"Enter elements of second matrix:\n";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>b[i][j];
            cout<<" ";
        }
        cout<<endl;
    }
    cout<<"\nSum of the two matrices is:"<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            Sum[i][j]=a[i][j]+b[i][j];
            cout<<Sum[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
