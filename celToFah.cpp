//ASG-9
//1)Write a C++ program to convert a temperature from Celsius to Fahrenheit.
#include<iostream>
using namespace std;
int main()
{
    double temp,res;
    cout<<"CELSIUS TO FAHRENHEIT CONVERTOR"<<endl;
    cout<<"\n Enter temperature(in°C): ";
    cin>>temp;
    cout<<"\n Temperature in(°F): ";
    res=(temp*9/5)+32;
    cout<<res;
    return 0;
}
