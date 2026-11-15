#include<iostream>
#include<string>
using namespace std;
int main(){
int a[2][2][3]={  // 1st is for blocks and 2nd is for rows and 3rd is for columns.
               {{1,2,3},{6,3,4}},
               {{2,6,7},{1,9,4}}
           };
     for(int k=0;k<2;k++){
     	for(int i=0;i<2;i++){
     		for(int j=0;j<3;j++){
     			cout<<a[k][i][j]<<" ";
			 }
			 cout<<endl;
		 }
		 cout<<endl;
	 }
	 return 0;
}