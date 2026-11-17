#include<iostream>
#include<string>
using namespace std;
int main(){
	int num;
	cout << "Enter the number: " << endl;
	cin >> num;
	int rem;
	int ans=0;
	int mul=1;
	while(num>0){
		rem=num%2;
		num/=2;
		ans=rem*mul+ans;
		mul*=10;
	}
	cout << ans << endl;
	return 0;
}