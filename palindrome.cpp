//ASG-9
//2) Create a C++ function that takes a string as input and checks if it is a palindrome (reads the same forwards and backward). Ignore spaces, punctuation, and capitalization.
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool pal(string s)
{
    string org=s;
    reverse(s.begin(),s.end());
    return org==s;
}
int main()
{
    string s;
    cout<<"Enter a string:";
    cin>>s;
    if(pal(s))
    {
        cout<<"\nThe entered string is a palindrome"<<endl;
    }
    else
    {
        cout<<"The entered string is not a palindrome";
    }
    return 0;
}
