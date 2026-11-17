#include<iostream>
#include<string>
using namespace std;
class person
{
	const string dob;
	public:
		person(string dob):dob(dob){}
			void show() const {
			cout<<"Person Date of birth is: "<<dob<<endl;
		}
};
int main(){
	person p1("21-3-2025");
	person p2("11-4-1992");
	p1.show();
	p2.show();
}