#include<iostream>
#include<string>
using namespace std;
class Point
{
	protected:
		int x;
		int y;
	public:
		
		Point(int x,int y){
			this->x = x;
			this->y = y;
		}
		int getX()const{
			return x;
		}
		int getY()const{
			return y;
		}
	
};

class Point3D:public Point
{
	private:
		int z;
	public:
		Point3D(int x,int y,int z):Point(x,y){
			this->z = z;
		}
		int getZ()const{
			return z;
		}
		friend ostream&operator<<(ostream&out,const Point3D&p){
			out << p.x << " " << p.y << " " << p.z << endl;
			return out;
		}
};

int main(){
	Point3D obj(4,7,2); //due to this count is 1
	Point3D obj2(6,8,2); //when we write this then 2 objects are being formed so count is 2 and if 1 more object is formed then count will be 3
    cout << obj << endl;
    cout << obj2 << endl;
	
	return 0;
}