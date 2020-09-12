/*Write a program that uses a structure called point to model a point. Define three points,
and have the user input values to two of them. Then set the third point equal to the sum
of the other two, and display the value of the new point.
*/
#include<iostream>
#include<conio.h>
using namespace std;
struct point
{
	int xCord;
	int yCord;	
};
int main()
{ 
    point p1,p2,sum; // defining three points
    cout<<"\t-------- Point to model a point--------\n";
	cout<<"\n* Enter Coordinates of P1 i.e : 0 1: ";
	cin>>p1.xCord>>p1.yCord;
	cout<<"\n***********************\n";
    cout<<"\n* Enter Coordinates of P2 i.e : 0 1: ";
	cin>>p2.xCord>>p2.yCord;
	cout<<"\n***********************\n";
	cout<<"\n------Sum of two Cordinates point------\n";
    sum.xCord = p1.xCord + p2.xCord;
    sum.yCord = p1.yCord + p2.yCord;
    cout<<"\n* Sum of Cordinates of p1+p2 is: "<<sum.xCord<<","<<sum.yCord<<endl;
    getch();
    cout<<"\n------- Thank You-------\n";
    return 0;	
}
