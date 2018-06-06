#include <iostream>
#include <string>
using namespace std;

struct Person{
	int age;
	string name;
	string genus;
	string email;
	void fill_obj()
	{
		cout<<"Enter your name,age,genus,email"<<endl;
		 cin>>name>>age>>genus>>email;

	}
	void print_obj()
	{
 		cout<<"your name is "<<name<<" age is "<<age<<" genius is "<<genus<<" email is "<<email<<endl;
	}

 
}; 


int main(){
	Person dav;
	Person harut;
	harut.fill_obj();
	dav.fill_obj();
	dav.print_obj();
	harut.print_obj();
	
}


