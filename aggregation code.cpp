#include<iostream>
#include<string>
using namespace std;
class Address
{
	private:
		string city;
		string country;
	public:
		Address(string c,string co):city(c),country(co){
			cout << "Address constructor called" << endl;
		}
		~Address(){
			cout << "Address destructor called" << endl;
		}
		void display(){
			cout <<"City is: " << city<< "Country is: " << country << endl;
		}
};

class Student
{
	private:
		string name;
		Address*address;
	public:
		Student(string n,Address*addr):name(n),address(addr){
			cout << "Student constructor called " << endl; 
		}
	void show(){
		cout << "Name is: " << name;
		address->display();
	}
};
int main(){
	Address adr("Mln","America");
	Student s1("John",&adr);
	Student s2("Herry",&adr);
	
	s1.show();
	s2.show();
	
	return 0;
}