#include<iostream>
#include<string>
using namespace std;
void bubbleSort(int arr[],int n){
	for(int i=0;i<n;i++){
		for(int j=0; j<n-i-1 ;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
		}
	}
}
void print(int arr[],int n){
	for(int i=0;i<n ;i++){
		cout << arr[i] <<" ";
		cout << endl;
	}
}
int main(){
	int arr[5]={3,7,1,8,10};
	int n=5;
	bubbleSort(arr,n);
	print(arr,n);
	return 0;
	
}