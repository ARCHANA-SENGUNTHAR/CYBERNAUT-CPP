//ASG-5
/*2)Get any random six numbers from the user, if any one a particular number is multiple of 5 then skip the 
number and print all other data got from the
 user.*/
 #include<iostream>
using namespace std;
int main()
{
    int num[6],i;
    cout<<"Enter any six numbers :\n";
    for(i=0;i<6;i++)
    {
        cin>>num[i];
    
    }
    cout<<"Entered numbers excluding multiples of 5 are:\n";
    for(i=0;i<6;i++)
    {
        if(num[i]%5==0)
        {
            continue;
        }
        cout<<num[i]<<endl;
    }
    return 0;
}

