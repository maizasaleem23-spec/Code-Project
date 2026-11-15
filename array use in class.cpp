#include<iostream>
#include<string>
using namespace std;
class Tank
{
	private:
		int weight;
	public:
		Tank(){
			weight = 50;
		}
		Tank(int w){
			weight= w;
		}
		void setWeight(int w){
			weight = w;
		}
		int getWeight(){
			return weight;
		}
};
int main(){
	Tank storage[3]={10,20};
	for(int i=0 ; i<3 ;i++){
		cout << storage[i].getWeight() << endl;
	}
	return 0;
}