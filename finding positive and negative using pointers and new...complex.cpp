#include<iostream>
#include<string>
using namespace std;
void getPosNeg(const int ar[],const int n_ar,int*&pos,int&n_pos,int*&neg,int&n_neg){
	n_pos=0;
    n_neg=0;
	int p_index=0;
	int n_index=0;
	for(int i=0;i<n_ar;i++){
		if(ar[i]>0){
			n_pos++;
		}
		else if(ar[i]<0){
		n_neg++;
		}
}
if(n_pos==0){
	pos=nullptr;
}
else{
	pos=new int[n_pos];
}
if(n_neg==0){
	neg=nullptr;
}
else{
	neg=new int[n_neg];
}
	for(int i=0;i<n_ar;i++){
	if(ar[i]>0){
		pos[p_index]=ar[i];
		p_index++;
	}
}
for(int i=0;i<n_ar;i++){
	if(ar[i]<0){
		neg[n_index]=ar[i];
		n_index++;
	}
}
}
int main(){
	int ar[10]={2,-5,1,-7,-3,9,5,-6,8,4};
	int*pos=nullptr;
	int*neg=nullptr;
	int n_pos=0;
	int n_neg=0;
	int n_ar=10;
	getPosNeg(ar,n_ar,pos,n_pos,neg,n_neg);
	cout<<"The positive array is: "<<endl;
	for(int i=0;i<n_pos;i++){
	cout<<pos[i]<<" ";
	cout<<endl;
}
	cout<<"The negative array is: "<<endl;
for(int i=0;i<n_neg;i++){
cout<<neg[i]<<" ";
cout<<endl;
}
delete[] pos;
delete[] neg;
	return 0;
}