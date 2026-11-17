#include<iostream>
#include<string>
using namespace std;
class B;
class A
{

	private:
		int numA;
	public:
		A(){
			numA=50;
		}
		friend void add(A,B);
};

class B
{
	private:
		int numB;
	public:
		B(){
			numB=20;
		}
		friend void add(A,B);
};

void add(A a,B b){
	cout << "The add result is: " << a.numA+b.numB << endl;
}
int main(){
	A a;
	B b;
	add(a,b);
	return 0;
}