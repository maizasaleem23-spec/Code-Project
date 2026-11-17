#include<iostream>
#include<string>
using namespace std;
enum Day
{
	Mon,Tue,wed,Thu,Fri,Sat,Sun
};
int main(){
	Day d=Mon;
	switch(d){
		case Mon:cout << "Monday" << endl;
		break;
		case Tue:cout << "Tuesday" << endl;
		break;
		default:cout << "Other day" << endl;
		break;
	}
	return 0;
}