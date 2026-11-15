#include<iostream>
#include<string>
using namespace std;
int main(){
	int num;
	int sum=0;
	int count=0;
	cout<<"Enter a number"<<endl;
	cin>>num;
	while(num!=-1){
sum+=num;
count++;
		cin>>num;
	}
	if(count==0){
		cout<<"No valid answer"<<endl;
	}
	else{
	
	float average=sum/count;
	cout<<"The average is"<<average<<endl;
}
	return 0;
}