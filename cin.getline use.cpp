#include<iostream>
#include<string>
using namespace std;
int main(){
	char arr[50];
	cout << "Enter your name: "<< endl;
	cin.getline(arr,50);
	cout <<"Your name is: " << arr << endl;
	return 0;
}