#include<iostream>
#include<conio.h>
using namespace std;
class counter{
	private:
	unsigned int count;
	public:
	counter() : count(1)
	{ }
	void inc_count() 
	{ count++;}
	int get_count()  
	{return count; }
	 
};
int main()
{
    counter c1, c2;
     c1.inc_count();                     //increment c1 
	 c2.inc_count();
	 cout<<"\n\t After first Increament ";     //increment c2 
     cout << "\n\t* c1=" << c1.get_count();  //display result
	 cout << "\n\t* c2=" << c2.get_count();
	 c1.inc_count();                     //again increment c1 
	 c2.inc_count();                     //again increament c2
	 cout<<"\n\t----------------------------------------\n";
	 cout<<"\t After Second Increament "; 
	cout << "\n\t* c1=" << c1.get_count();  //Show results 
	cout << "\n\t* c2=" << c2.get_count();
     getch();
}
