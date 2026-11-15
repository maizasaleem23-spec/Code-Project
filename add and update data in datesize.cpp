#include<iostream>
#include<string>
using namespace std;
void showArray(int ar[],const int as,const int ds){
	if(as>=ds){
		for(int j=0;j<ds;j++){
			cout<<ar[j]<<endl;
		}
	}
	return;
}

void addData(int ar[],const int as,int value,int &ds){
if(ds<as){

		ar[ds]=value;
		ds++;
	}
}

void updateData(int ar[],const int as,int oldvalue,int newvalue){
for(int j=0;j<as;j++){

		if(ar[j]==oldvalue);
		ar[j]==newvalue;
	}
}

int main(){
	const int as=1000;
	int a[as];
	int ds=0;
	addData(a,as,63,ds);
	addData(a,as,19,ds);
	addData(a,as,47,ds);
	showArray(a,as,ds);
	
	updateData(a,as,19,80);
	showArray(a,as,ds);
	addData(a,as,47,ds);
	addData(a,as,59,ds);
	addData(a,as,22,ds);
	showArray(a,as,ds);
	return 0;
}