#include<iostream>
#include<string>
using namespace std;
int main(){
	int arr[5]={3,6,7,9,1};
	int k=2;
	int n=5;
	int rotated[5];
	for(int i=0;i<5;i++){
		rotated[i]=arr[(i+k)%n];
			cout<<rotated[i]<<" ";
	}

	return 0;
}