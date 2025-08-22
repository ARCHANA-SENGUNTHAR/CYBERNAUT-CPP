//ASG-7
//1)Create a pointer variable with the name ptr, that should point to a string variable named food.
#include<iostream>
using namespace std;
int main()
{
    string *ptr; //pointer variable declaration
    
    string s="food"; //string initialization 
    
   ptr= &s;//pointer pointing to a string
   
   
   //printing the value at the address which ptr points to
   
    cout<<"Pointer variable points to: "<<*ptr;
   return 0;
}
