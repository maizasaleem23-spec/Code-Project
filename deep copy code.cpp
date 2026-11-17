#include<iostream>
#include<string>
using namespace std;
class Temp
{
	public:
		char*name;
	//public:
		Temp(const char*str){
			name = new char[strlen(str)+1];
			strcpy(name,str);
		}
		Temp(const Temp&str){ //Lines for deep copy
			name = new char[strlen(str.name)+1];
			strcpy(name,str.name);
		}
		void display(){
			cout << "The name is: " << name << endl;
		}
		~Temp(){
			delete name;
		}
};
int main(){
	Temp t1("John");
	Temp t2 = t1;
    t1.name[0]='e';
    t1.display(); 
	t2.display();
	return 0; 
}