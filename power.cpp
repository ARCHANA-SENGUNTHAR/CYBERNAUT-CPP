//ASG-8
//2) Create a C++ program to calculate the power of a number .
#include <iostream>
using namespace std;
int main()
{
    float base,pov=1;
    int expo;
    
    cout<<"POWER FINDER"<<endl<<endl;
    cout<<"Enter base and exponent: ";
    cin>>base>>expo;
    cout<<"\n"<<base<<"^"<<expo<<": ";
    while(expo!=0)
    {
        pov*=base;
        expo--;
    }
    cout<<pov;
    return 0;
}