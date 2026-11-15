#include<iostream>
#include<string>
using namespace std;
class Room
{
	private:
		string roomType;
		int size;
	public:
		Room(string rt,int s):roomType(rt),size(s){
			cout << "Room constructor called" << endl;
		}
		~Room(){
			cout << "Room destructor called " << endl;
		}
		void show(){
			cout << "Room type of: " << roomType << "and size : " << size << endl;
		}
};

class House
{
	private:
		string address;
		Room bedroom;
		Room kitchen;
	public:
		House(string addr):address(addr),bedroom("Bedroom",133),kitchen("kitchen",255){
			cout << "House constructor called " << endl;
		};
		
		~House(){
		cout << "House destructor called " << endl;
		}
		
		void display(){
			cout << "Address is: " << address << endl;
			bedroom.show();
			kitchen.show();
		}
		
};
int main(){
	House h1("Lahore");
	h1.display();
	
	return 0;
}