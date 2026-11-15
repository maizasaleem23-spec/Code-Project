#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int countDigit(int n){
	int count=0;
	while(n>0){
	
		count++;
		n/=10;
	}
	return count;
}

bool ArmstrongNumber(int digit,int num){
	int ans=0;
	int rem;
	int n=num;
	while(n){
		rem=n%10;
		ans=ans+pow(rem,digit);
		n/=10;
	}
	if(ans==num)
	return 1;
	else
	return 0;
}
int main(){
	int num;
	cout<<"Enter the number: "<<endl;
	cin>>num;
	int digit=countDigit(num);
	cout<<ArmstrongNumber(digit,num);
	
}