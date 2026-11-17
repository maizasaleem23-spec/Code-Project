#include<iostream>
#include<string>
using namespace std;
int main(){
	int n=10;
	int*p=&n;
	int**ptr=&p;
	cout<<p<<endl;
	cout<<*p<<endl;
	cout<<ptr<<endl;
	cout<<*ptr<<endl;
	cout<<**ptr<<endl;
	**ptr=**ptr+10;
	cout<<n<<endl;
	return 0;
}