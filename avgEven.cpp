//ASG-7
//2)Find the average of 10 even numbers starting from 100.
#include <iostream>
using namespace std;
int main()
{
    int i,first=100;
    double avg=0;
    //To take 10 numbers from 100 
    for(i=0;i<10;i++)
        {
           avg+=first+i*2;//taking sum of even numbers starting from 100
        }
        avg=avg/10;
    cout<<"Average of ten even numbers greater than 100: "<<avg;
    return 0;
}

