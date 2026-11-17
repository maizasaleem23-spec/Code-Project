#include<iostream>
#include<string>
using namespace std;
int main(){
	int rows;
	int cols;
	cout << "Enter rows: ";
	cin>>rows;
	cout << "Enter cols: ";
	cin>>cols;
	int**ptr=new int*[rows];
	for(int i=0; i<rows ; i++){
		ptr[i]=new int[cols];
	}
	cout << "Enter array elements: ";
	for(int i=0; i<rows ; i++){
		for(int j=0; j<cols ; j++){
			cin >> ptr[i][j];
		}
	}
	cout << "The array elements are: ";
	for(int i=0; i<rows ; i++){
		for(int j=0; j<cols ; j++){
			cout << ptr[i][j]<< " ";
			cout << endl;
		}
	}
	for(int i=0; i<rows;i++){
		delete[] ptr[i];
	}
	delete[] ptr;
	ptr=nullptr;
	return 0;
}