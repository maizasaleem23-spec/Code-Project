#include<iostream>
#include<string>
using namespace std;
int diagonalmatrix(int arr[3][3]){
	int diag;
	for(int i=0;i<3;i++){
		cout<<"Enter the number for diagonal position: "<<i+1<<endl;
		cin>>diag;
		for(int j=0;j<3;j++){
			if(i==j){
				arr[i][j]=diag;
			}
		else{
				arr[i][j]=0;
			}
		}
	}
	cout<<"The diagonal matrix is: ";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<arr[i][j]<<" ";
}
cout<<endl;
}
}
int main(){
	int arr[3][3];
	diagonalmatrix(arr);
	return 0;
}