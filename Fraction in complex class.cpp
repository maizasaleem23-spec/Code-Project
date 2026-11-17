#include<iostream>
#include<string>
using namespace std;
class Fraction
{
	private:
		int numerator;
		int denominator;
	public:
			Fraction() : numerator{0}, denominator{1} {};

Fraction(int n, int d) {
    numerator   = n;
    denominator = d;
}
	Fraction operator+(const Fraction&obj){
		Fraction temp;
		temp.numerator   = (numerator * obj.denominator) +
                   (obj.numerator * denominator);
temp.denominator = denominator * obj.denominator;
return temp;
	}
	friend ostream& operator<<(ostream& out, const Fraction& obj) {
    out << obj.numerator << "/" << obj.denominator;
    return out;
}
};

class Complex
{
	private:
		Fraction real;
		Fraction imaginary;
	public:
	Complex(Fraction r, Fraction i) : real{r}, imaginary{i} {};
		Complex operator+(const Complex&obj){
			return Complex(real+obj.real,imaginary+obj.imaginary);
		}
		friend ostream& operator<<(ostream& out, const Complex& obj) {
    out << obj.real << " + " << obj.imaginary << "i";
    return out;
}
};

int main(){
	Complex c1(Fraction(3,4),Fraction(5,6));
Complex c2(Fraction(1,2), Fraction(2,3));
	cout << "C1: " << c1 << endl;
	cout << "C1+C2: " << (c1+c2) << endl;
	return 0;
	
	
}