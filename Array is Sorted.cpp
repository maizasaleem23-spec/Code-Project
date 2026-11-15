#include<iostream>
#include<string>
using namespace std;
bool isSorted(int arr[],int n){
	for(int i=0;i<n-1;i++){
		if(arr[i]<arr[i+1]){
		return false;	
		}
		return true;
	}
}
int main(){
	int n=5;
	int arr[5]={2,7,1,6,8};
	if(isSorted(arr,n)){
		cout<<"Array is Sorted"<<endl;
	}
	else{
	
	cout<<"Array is not Sorted"<<endl;
}
return 0;
}