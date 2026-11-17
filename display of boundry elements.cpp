#include<iostream>
#include<string>
using namespace std;
int main(){
int arr[3][3]={{2,7,3},{4,5,6},{9,8,4}};
int r=3;
int c=3;
for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
		if(i==0 || j==0 || i==r-1 || j==c-1 ){
			cout<<arr[i][j]<<" ";
		}
		else{
			cout<<" ";
		}
	}
}
	return 0;
}