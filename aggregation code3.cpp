#include<iostream>
#include<string>
using namespace std;
class Doctor
{
	public:
		string name;
		string degree;
	Doctor(string n,string d):name(n),degree(d){
		cout << "Daughter constructor called "<< endl;
	}
	void show(){
		cout << "Name: " << name  << "Degree: " << degree << endl; 
	}
};

class Hospital
{
	public:
		string hospitalName;
		Doctor*d1;
		Doctor*d2;
	Hospital(string hn,Doctor*doc1,Doctor*doc2):hospitalName(hn),d1(doc1),d2(doc2){
		cout << "Parent constructor called" << endl;
	}
	
	void display(){
		cout << "Hospital name is: " << hospitalName << endl;
		d1->show();
		d2->show();
	}
};
int main(){
	Doctor doc1("John","MBBS");
	Doctor doc2("Herry","MBBS");
	Hospital h1("Doctor Hospital",&doc1,&doc2);
	h1.display();
	
	return 0;
}