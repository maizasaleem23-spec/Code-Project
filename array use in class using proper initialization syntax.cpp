#include <iostream> 
 using namespace std; 
 class Yard 
 { 
 public: 
    int length, width; 
    Yard() 
       { length = 0; width = 0; } 
    void setLength(int len) 
       { length = len; } 
    void setWidth(int w) 
       { width = w; } 
    Yard(int l,int w){
    	length  =l;
    	width = w;
	}
    
 }; 
 int main() 
 { 
 Yard y[3] = {Yard(4,6),Yard(2,8),Yard(9,1)};
 for(int i=0; i<3 ;i++){
 	cout << y[i].length << " " << y[i].width << endl;
 }
 return 0;
}