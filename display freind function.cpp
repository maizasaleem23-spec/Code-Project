#include<iostream>
using namespace std;
class A
{
	private:
		int numA;
	public:
		A(){
			numA = 100;
		}
		friend class B;
};
class B
{
	public:
	void displayA(A obj){
		cout << "A is: "<< obj.numA << endl;
	}
};
int main(){
	A obA;
	B obB;
	obB.displayA(obA);
	return 0;
}