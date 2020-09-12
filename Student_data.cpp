#include<iostream>
#include<conio.h>
using namespace std;
class student {
    private:  
	string name;
	string f_name;
	int roll_no;
	string address;
	string mobile_no;
	int age;
	string hobbies;
	public:
	 void getinfo(string stdname, string stdf_name, int stdroll_no, string stdaddress, string stdmobile_no, int stdage, string stdhobbies )
	 {
	 	name= stdname;
	 	f_name= stdf_name;
	 	roll_no= stdroll_no;
	 	address=stdaddress;
	    mobile_no=stdmobile_no;
	    age=stdage;
	 	hobbies=stdhobbies;
	  }
	  void showinfo()
	  {
	  	cout<<"\t* Name: "<<name<<endl;
	  	cout<<"\t* Father Name : "<<f_name<<endl;
	  	cout<<"\t* Roll no : "<<roll_no<<endl;
	  	cout<<"\t* Address : "<<address<<endl;
	  	cout<<"\t* Mobile Number : "<<mobile_no<<endl;
	  	cout<<"\t* Age : "<<age<<endl;
	  	cout<<"\t* Hobbies : "<<hobbies<<endl;
	  	cout<<"\n*****************************\n";
	  }
};
int main()
{
	student s1,s2,s3;
	s1.getinfo("Huzaifa khan", "Mubarik khan",14,"Punjab Society", "0331-8758705",18,"Cricket");
	s2.getinfo("Rizwan ", "Ahmad ",14,"Saroba Garden ", "0330-4567382",20,"Football");
	s3.getinfo("Mehroz ", "Sultan Ali ",14,"Garden Town ", "0331-3465682",20,"Reading");
	cout<<"\n\t----Students Bio data----\n"<<endl;
	s1.showinfo();
	s2.showinfo();
	s3.showinfo();
	getch();
	cout<<"\n------Thank You-------\n"<<endl;
	return 0;
}

