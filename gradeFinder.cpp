//ASG-4
/* 1) Write a program for finding the grade by using the given data.

a) If the score is 100, then the grade is A.

b) If the score is 99-90, then the grade is B.

c) If the score is 89-80, then the grade is C.

d) If the score is 79-70, then the grade is D.

e) If the score is 69-60, then the grade is E.

f) If the score is less than 60, Fail.*/
#include<iostream>
using namespace std;
int main()
{
    int score;
    cout<<"GRADE FINDER"<<endl;
    cout<<"\nEnter the score:";
    cin>>score;
    if(score==100)
    {
        cout<<"Grade is A";
    }
    else if(score>=90 && score<100)
    {
        cout<<"Grade is B";
    }
    else if(score>=80 && score<90)
    {
        cout<<"Grade is C";
    }
    else if(score>=70 && score<80)
    {
        cout<<"Grade is D";
    }
    else if(score>=60 && score<70)
    {
        cout<<"Grade is E";
    }
    else
    {
        cout<<"FAIL";
    }
    return 0;
}


