#include <iostream>
#include <string>
using namespace std;

struct Person{
	int age;
	string name;
	string genus;
	string email; 
}; 

void fill_obj(Person &mard)
{
	cout<<"Enter your name,age,genus,email"<<endl;
	 cin>>mard.name>>mard.age>>mard.genus>>mard.email;

}
void print_obj(Person const mard)
{
 	cout<<"your name is "<<mard.name<<" age is "<<mard.age<<" genius is "<<mard.genus<<" email is "<<mard.email<<endl;
}

int main(){
	Person davit;
	Person harut;
	
	fill_obj(davit);
	print_obj(davit);
	
	fill_obj(harut);
	print_obj(harut);

}
