#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(){
	int num=153;
	int original=num;
	int count=0;
	int sum=0;
	int numCopy=num;
while(num>0){
	num=num/10;
	count++;
	}
while(numCopy>0){
		int digit=numCopy%10;
		sum+=pow(digit,count);
		numCopy=numCopy/10;
}
if(sum==original){
	cout<<"Armstrong number"<<endl;
}
else{
	cout<<"Not an armstrong number"<<endl;
}
	return 0;
}