//ASG-5
//1) Implement a C++ program to find the factorial of a given positive integer using a loop.
#include<iostream>
using namespace std;
int main()
{
    int num,ans=1,i;
    cout<<"Enter a positive number to find its factorial: ";
    cin>>num;
    if(num<0)
    {
        cout<<"Enter a positive integer for getting factorial!!!";
    }
    else
    {
    for(i=num;i>1;i--)
    {
        ans*=i;
    }
    cout<<"\n Factorial of "<<num<<": "<<ans;
    return 0;
    }
}


