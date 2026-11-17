#include<iostream>
#include<string>
using namespace std;
int main(){
	int n=5;
	int prod=1;
	for(int i=1;i<n;i++){
		int fact=(n-i);
		prod*=fact;
	}
	int result=prod*n;
	cout<<"The factorial of "<<n<<" is: "<<result<<endl;
	return 0;
}