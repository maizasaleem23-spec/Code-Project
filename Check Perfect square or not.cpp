#include<iostream>
#include<string>
#include<cmath>
using namespace std;
void checkPerfectsquare(int num){
	int root=sqrt(num);
	if(root*root==num){
		cout<<"It is a perfect square"<<endl;
	}
	else
	cout<<"It is not a perfect square"<<endl;
}
int main(){
	int num;
	cout<<"Enter a number"<<endl;
	cin>>num;
	checkPerfectsquare(num);
	return 0;
	
}