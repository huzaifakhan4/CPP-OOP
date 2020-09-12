/* Create a structure called employee that contains two members: an employee number
(type int) and the employee’s compensation (in dollars; type float). Ask the user to fill
in this data for three employees, store it in three variables of type struct employee, and
then display the information for each employee.
*/
#include<iostream>
using namespace std;
struct employee
{
  int empNum;
  float empCom;
void display()              // Void is a function
{  employee emp[3];
for(int i=0; i<3; i++)   // Using loop to take data of for 3 time of 3 employee
{
  cout<<"Enter "<<i+1<<" employee number  "<<" : ";  //Here use i+1 to show employee number
  cin>>emp[i].empNum;  
  cout<<"Enter "<<i+1<< " employee compensation (In Dollars $)   "<<" : "; 
  cin>>emp[i].empCom;
}
 cout<<"Employee number"<<"   Employee compensation"<<endl;
 for(int i=0; i<3; i++) 
{
 cout<<i+1<<"-";
 cout<<"\t"<<emp[i].empNum<<"\t\t"<<emp[i].empCom<<endl;   // \t is an escape sequence for used for space
}
}
};
int main()
{   
    employee e;
	e.display();
    return 0;
}


