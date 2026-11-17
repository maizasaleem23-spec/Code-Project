#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ofstream ofile("maiza.txt");
	ofile << "My name is Maiza " << endl;
	ofile << " I am 18 years old " << endl;
	ofile.close();
	return 0;
}