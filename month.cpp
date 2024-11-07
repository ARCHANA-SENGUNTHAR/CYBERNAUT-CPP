//ASG-2
//1)Get the user’s birth month in numbers and print the respective month.
#include<iostream>
using namespace std;
int main()
{
 int month;
 cout<<"Enter the month number of your birthday: ";
 cin>>month;
 switch(month)
   {
     case 1:
     cout<<"\nJANUARY";break;
     case 2:
     cout<<"\nFEBRUARY";break;
     case 3: 
     cout<<"\nMARCH";break;
     case 4:
     cout<<"\nAPRIL";break;
      case 5:
     cout<<"\nMAY";break;
      case 6:
     cout<<"\nJUNE";break;
      case 7:
     cout<<"\nJULY";break;
      case 8:
     cout<<"\nAUGUST";break;
      case 9:
     cout<<"\nSEPTEMBER";break;
      case 10:
     cout<<"\nOCTOBER";break;
      case 11:
     cout<<"\nNOVEMBER";break;
      case 12:
     cout<<"\nDECEMBER";break;
      }
 return 0;
}
