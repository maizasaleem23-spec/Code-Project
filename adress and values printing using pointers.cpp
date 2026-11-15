#include<iostream>
#include<string>
using namespace std;
int main(){
	int arr[5]={1,2,3,4,5};
    //print adress of array
    cout<<"Adress of array: "<<endl;
    cout<<arr<<endl;
    cout<<arr+0<<endl;
    cout<<&arr[0]<<endl;
    //print adress through pointer variable
    cout<<"Adress of array using pointer variable: "<<endl;
    int*ptr=arr;
    cout<<ptr<<endl;
    //print values of array
    cout<<"Value at any index of array: "<<endl;
    cout<<arr[0]<<endl;
    //print all values of array
    cout<<"All values in array are: "<<endl;
    for(int i=0;i<5;i++){
    	cout<<arr[i]<<" ";
    	cout<<endl;
	}
	//print all adresses
	cout<<"All adress are: "<<endl;
	for(int i=0;i<5;i++){
		cout<<(arr+i)<<"  ";
		cout<<endl;
	}
	return 0;
}