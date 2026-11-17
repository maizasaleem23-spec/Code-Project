#include<iostream>
#include<string>
using namespace std;
void dob(int*p){
	for(int i=0;i<5;i++){
		p[i]=2*p[i];
	}
}
int main(){
	int arr[5]={1,2,3,4,5};
	dob(arr);
	cout<<"The doubled values are: "<<endl;
	for(int i=0;i<5;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}