//ASG-11
//1) Write a C++ program to get the car name, model and car number from the user and print it.
#include<iostream>
using namespace std;
//declaring CLASS named car
class car{

  private:
       string name, model, number;
      
  public:
       car(){
            name=model=number="NULL";
       }
       void input(){
            cout<<"Enter Car Name:";
            cin>>name;
            cout<<"Enter Car Model:";
            cin>>model;
            cout<<"Enter Car Number:";
            cin>>number;
       }
       void display(){
            cout<<"\n \n Name of car:"<<name<<endl<<"Model of Car:"<<model<<endl;
            cout<<"Car Number:"<<number;
       }
};

int main(){
  car c1;
  c1.input();
  c1.display();
  return 0;
}   
