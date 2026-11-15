#include<iostream>
#include<string>
using namespace std;
const int sentinal=-1;
void makeArrayempty(int ar[],const int as){
	for(int j=0;j<as;j++){
		ar[j]=sentinal;
	}
	return;
}



void showArray(int ar[],const int as){
	for(int j=0;j<as;j++){
		if(ar[j]!=sentinal){
			cout<<ar[j]<<" ";
		}
	}
cout<<endl;
}

void bubbleSort(int ar[],const int as){
	int n=0;
	for(int i=0;i<as;i++){
	if(ar[i]!=sentinal)
	n++;
}
for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
					if(ar[j]>ar[j+1]){
				swap(ar[j],ar[j+1]);
			}
		}
    }
}
void addData(int ar[],const int as,int value){
	for(int i=0;i<as;i++){
		if(ar[i]==sentinal){
			ar[i]=value;
			break;
		}
	}
}
void updateData(int ar[],const int as,int oldvalue,int newvalue){
	for(int i=0;i<as;i++){
		if(ar[i]==oldvalue){
			ar[i]=newvalue;
			break;
		}
	}
}
void removeData(int ar[],const int as,int value){
	for(int i=0;i<as;i++){
		if(ar[i]==value){
			ar[i]=-1;
			break;
		}
	}
}

int main(){
	const int as=1000;
	int a[as];
	makeArrayempty(a,as);
 addData(a,as,63);
 addData(a,as,19);
 addData(a,as,47);
 
 cout<<"Original array"<<endl;
 showArray(a,as);
 


cout<<"Sorted array"<<endl;
bubbleSort(a,as);
showArray(a,as);
cout<<"Updated array"<<endl;
updateData(a,as,19,80);
showArray(a,as);
addData(a,as,47);
addData(a,as,59);
addData(a,as,22);
showArray(a,as);
cout<<"Remove array"<<endl;
removeData(a,as,47);
showArray(a,as);
return 0;
}