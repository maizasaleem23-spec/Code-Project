#include<iostream>
#include<string>
using namespace std;
int diagonalFind(int arr[3][3]){
	bool flag=true;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
		if(i==j && arr[i][j]==0){
			flag=false;
			break;
		}
		if(i!=j && arr[i][j]!=0){
			flag=false;
			break;
		}
	}
}
if(!flag){
	cout<<"The matrix is not diagonal"<<endl;
}
else{
	cout<<"The matrix is diagonal"<<endl;
}
}
int main(){
	int arr[3][3]={{9,0,0},{0,1,0},{0,0,6}};
    diagonalFind(arr);
	return 0;
}