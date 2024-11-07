//ASG-3
//2) Implement a C++ program for a simple calculator that performs basic arithmetic operations.
based on user input.
#include<iostream>
using namespace std;
int main()
{
    float a,b,result=0;
    char ch;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    cout<<"Enter the arithmetic operation to be done: ";
    cin>>ch;
    switch(ch)
    {
        case '+':
          result=a+b;
          break;
        case '-':
          result=a-b;
          break;
        case '*':
          result=a*b;
          break;
        case '/':
          result=a/b;
          break;
        default:
        cout<<"Enter a valid operation(+,-,*,/) !!";
    }
    cout<<"Result:"<<result;
    return 0;
}

