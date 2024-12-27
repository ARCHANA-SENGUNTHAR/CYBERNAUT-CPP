//ASG-6
//2) Implement a C++ program to find the greatest common divisor (GCD) of two numbers.
#include <iostream>
using namespace std;
int main()
{
    int A,B,hcf,i,temp;
    cout<<"GCD FINDER"<<endl<<endl;
    cout<<"Enter the two numbers: ";
    cin>>A>>B;
    cout<<endl;
    if(B>A)
    {
        temp=B;
        B=A;
        A=temp;
    }
    for(i=1;i<=B;i++)
    {
        if(A%i==0 && B%i==0)
        {
            hcf=i;
        }
    }
    cout<<"GCD is: "<<hcf;
}
