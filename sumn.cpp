//ASG-3
//1)Implement a C++ program to find the sum of natural numbers up to a given positive integer.
#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,i;
    cout<<"Enter the natural number till which sum is to be calculated:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
       sum+=i;
    }
    cout<<"Calculated Sum is:"<<sum;
    return 0;
}


