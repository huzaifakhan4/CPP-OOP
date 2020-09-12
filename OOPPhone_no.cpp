/*A phone number, such as (212) 767-8900, can be thought of as having three parts: the
area code (212), the exchange (767), and the number (8900). Write a program that uses a
structure to store these three parts of a phone number separately. Call the structure
phone. Create two structure variables of type phone. Initialize one, and have the user
input a number for the other one. Then display both numbers.
*/
#include<iostream>
#include<conio.h>
using namespace std;
struct phone{
    int area;
    int exchange;
    int number;
};
int main()
{   phone num1={312,345,4567}; //Initializing my phone number
    phone num2;
    cout<<"\n* Please enter your area code, exchange and number i.e: 123 456 7890: ";
    cin>>num2.area>>num2.exchange>>num2.number;
    cout<<"\n  ****************************\n";
    cout<<"\n* My phone number is: "<< '('<<num1.area<<')'<< num1.exchange<<"-"<<num1.number<<endl;
    cout<<"\n* Your phone number is: "<< '('<<num2.area<<')'<< num2.exchange<<"-"<<num2.number<<endl;
    getch();
	cout<<"\n -------Thank you-------\n";
	return 0;
}
