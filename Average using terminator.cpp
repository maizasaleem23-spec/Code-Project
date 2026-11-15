#include<iostream>
#include<string>
using namespace std;
int main(){
	float average;
	int x;
	int sum=0;
	int count=0;
	cout<<"Enter the value of x"<<endl;
	cin>>x;
	while(x!=-1){
		sum+=x;
		count++;
		cin>>x;
	}

cout<<"The average is"<<sum/count<<endl;
return 0;
}
