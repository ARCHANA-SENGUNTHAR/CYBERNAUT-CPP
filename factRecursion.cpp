//ASG-8
//1) Write a C++ program that calculates and displays the factorial of a given positive integer using a recursive function. 
#include<iostream>
using namespace std;
int factorial(int num)
{
    if(num<=1)
    {
        return 1;
    }
    else
    {
        return num*factorial(num-1);
    }
}
int main()
{
    int num;
    cout<<"FACTORIAL FINDER\n\n";
    cout<<"Enter a positive number: ";
    cin>>num;
    int result=factorial(num);
   cout<<"Factorial of "<<num<<": "<<result;
    return 0;
}