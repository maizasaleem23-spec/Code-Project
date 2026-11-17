#include<iostream>
#include<string>
using namespace std;
void getEvenOdd(const int ar[], const int n_ar, int*& even, int& n_even, int*& odd, int& n_odd){
	int e_index=0;
	int o_index=0;
	n_even=0;
    n_odd=0;
	for(int i=0;i<n_ar;i++){
		if(ar[i]%2==0){
			n_even++;
		}
		else if(ar[i]%2!=0){
			n_odd++;
		}
	}
		for(int i=0;i<n_ar;i++){
	if(n_even==0){
		even=nullptr;
	}
	else{
		even=new int[n_even];
	}
	if(n_odd==0){
		odd=nullptr;
	}
	else{
		odd=new int[n_odd];
	}
}
	for(int i=0;i<n_ar;i++){
		if(ar[i]%2==0){
			even[e_index]=ar[i];
			e_index++;
		}
		else{
			odd[o_index]=ar[i];
			o_index++;
		}
}
}
int main(){
	int ar[10]={3,6,1,6,8,4,2,4,7,8};
	int n_ar=10;
	int*even=nullptr;
	int n_even=0;
	int*odd=nullptr;
	int n_odd=0;
    getEvenOdd(ar, n_ar,  even,  n_even,odd, n_odd);
    cout<<"The positive elements are: ";
    for(int i=0;i<n_even;i++){
    	cout<<even[i]<<" ";
    	cout<<endl;
	}
	cout<<"The odd elements are: ";
for(int i=0;i<n_odd;i++){
	cout<<odd[i]<<" ";
	cout<<endl;
}
delete[] even;
delete[] odd;
}