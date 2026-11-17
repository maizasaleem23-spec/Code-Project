#include<iostream>
#include<string>
using namespace std;
void func(int**p){
	**p=**p+5;
}
int main(){
	int n=10;
	int*ptr1=&n;
	int**ptr2=&ptr1;
	func(ptr2);
	cout<<n;
	return 0;
}