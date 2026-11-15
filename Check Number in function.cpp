#include<iostream>
#include<string>
using namespace std;
int checkNumber(int n){
	if(n>0){
		cout<<"Positive number"<<endl;
	}
	else if(n<0){
		cout<<"Negative number"<<endl;
	}
	else if(n==0){
		cout<<"The number is zero"<<endl;
	}
	
}
	int main(){
		checkNumber(0);
		return 0;
	}
