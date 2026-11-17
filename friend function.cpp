#include<iostream>
using namespace std;
class Distance
{
	private:
		int meters;
		public:
			Distance(){
				meters = 0;
			}
			void Display(){
				cout << "Distance is: "<<meters << endl;
			}
			friend void addvalue(Distance &d);
};
void addvalue(Distance&d){
	d.meters = d.meters + 5;
}
int main(){
	Distance d1;
	d1.Display();
	cout << endl;
	addvalue(d1);
	d1.Display();
	return 0;
}