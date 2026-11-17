#include<iostream>
#include<string>
using namespace std;
int main(){
	int arr[15]={0,0,0,3,4,4,5,8,8,8,8,8,8,9,9};
	int n=15;
	int count;
	for(int i=0;i<n;i++){
		count=0;
		for(int j=0;j<i;j++){
			if(arr[i]==arr[j]){
				count++;
			}
		}
		if(count==0){
		cout<<arr[i]<<" ";
			
		}
	}
	cout<<endl;
	return 0;
}