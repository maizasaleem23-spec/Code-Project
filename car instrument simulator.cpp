#include<iostream>
#include<string>
using namespace std;
class FuelGuage
{
	private:
		int fuelAmount;
	public:
	FuelGuage(){
		fuelAmount=0;
	}
		void setFuel(int f){
			fuelAmount = f;
		}
		int getFuel()const{
			return fuelAmount;
		}
		void incrementFuel(){
			if(fuelAmount<15){
				fuelAmount++;
			}
		}
		void decrementFuel(){
			if(fuelAmount>0){
				fuelAmount--;
			}
		}
		
};

class Odometer
{
    private:
    	int mileage;
        FuelGuage*fg;
    public:
    	Odometer(FuelGuage*f){
    		mileage=0;
    		fg=f;
		}
    	void setMileage(FuelGuage*f){
    		mileage = 0;
    		fg=f;
		}
		int getMileage(){
			return mileage;
		}
		void incrementMileage(){
			mileage++;
			if(mileage>999999){
				mileage = 0;
			}
		if(mileage%24==0){
				fg->decrementFuel();
			}
		}
};

int main(){
	FuelGuage fg;
	Odometer o1(&fg);
	
	for(int i=0;i < 15 ;i++){
		fg.incrementFuel();
}
	while(fg.getFuel()!=0){
		o1.incrementMileage();
		cout << fg.getFuel() << endl;
		cout << o1.getMileage() << endl;
	
	}
	return 0;
}