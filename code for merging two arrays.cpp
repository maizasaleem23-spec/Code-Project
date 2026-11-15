#include<iostream>
#include<string>
using namespace std;
int main(){
	int i=0;
	int a[5]={5,3,9,2,6};
	int b[6]={1,8,7,3,4,9};
	int c[11];
	int k=0;
    while(i<5){
		c[k]=a[i];
		i++;
		k++;
	}
	i=0;
    while(i<6){
		c[k]=b[i];
		i++;
		k++;
	}
	cout<<"The total merged array is:";
	for(int i=0;i<11;i++){
		cout<<c[i]<<" ";
	}
	return 0;
}