//ASG-6
//2) Implement a C++ program to find the greatest common divisor (GCD) of two numbers.
#include <iostream>
using namespace std;
int main()
{
    int A,B;
    cout<<"GCD FINDER"<<endl<<endl;
    cout<<"Enter two numbers:";
    cin>>A>>B;
    while(A!=B)
    {
        if(A>B)
        { 
            A-=B;
        }
        else
        {
            B-=A;
        }
    }
    cout<<"GCD is: "<<A;
    return 0;
}
