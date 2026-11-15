#include<iostream>
#include<string>
using namespace std;
void search(int arr[],int n,int tar){
	int closest;
	int currentdiff;
	int min=INT_MAX;
	for(int i=0;i<5;i++){
	currentdiff=abs(arr[i]-tar);
		
		if(currentdiff<min){
			min=currentdiff;
			closest=arr[i];
		}
	}
	cout<<"Closest value to"<<tar<<"is"<<closest<<endl;
}
int main(){
	int currentdiff;
	int n=5;
	int arr[5]={23,56,72,99,31};
	int tar=18;
    search(arr,n,tar);
    return 0;
	
}