#include<iostream>
#include<string>
using namespace std;
int main(){
	int a=10;
	int*ptr=&a;
	*ptr=20;
	cout<<*ptr<<endl;
	return 0;
}