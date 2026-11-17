#include<iostream>
#include<string>
using namespace std;
int swaparray(int arr[],int n){
	for(int i=0;i<n;i+=2){
	int temp=arr[i];
	arr[i]=arr[i+1];
	arr[i+1]=temp;
			}
		}
int main(){
	int n=6;
	int arr[6]={3,4,5,1,7,9};
	int result=swaparray(arr,6);
	cout<<"The resulted array is:";
for(int i=0;i<n;i++){
cout<<arr[i]<<" ";
}
cout<<endl;
return 0;
}