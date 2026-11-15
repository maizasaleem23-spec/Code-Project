#include<iostream>
#include<string>
#include<cmath>
using namespace std;
class BinaryTree
{
	private:
		int*data;
		bool*status;
		int height;
	public:
		BinaryTree(int h){
			height=h;
			data=new int[(int)pow(2,height)-1];
			status=new bool[(int)pow(2,height)-1];
			for(int i=0;i<pow(2,height)-1;i++){
				status[i]=0;
			}
		}
		
		void setRoot(int r){
			if(status[0]==0){
				data[0]=r;
				status[0]=1;
			}
		}
		
		void setLeftChild(int p,int n){
			for(int i=0;i<pow(2,height)-1;i++){
				if(data[i]==p && status[i]==1){
					if(status[2*i+1]==0){
						data[2*i+1]=n;
						status[2*i+1]=1;
						break;
					}
				}
			}
		}
		
			void setRightChild(int p,int n){
			for(int i=0;i<pow(2,height)-1;i++){
				if(data[i]==p && status[i]==1){
					if(status[2*i+2]==0){
						data[2*i+2]=n;
						status[2*i+2]=1;
						break;
					}
				}
			}
		}
		
		int getParent(int n){
			for(int i=1;i<(int)pow(2,height)-1;i++){
				if(data[i]==n && status[i]==1){
					return data[i-1]/2;
				}
			}
			return -1;
		}

		int getRoot(){
			if(status[0]==1){
				return data[0];
			}
			return -1;
		}
		
		void levelOrderPrint(){
			for(int i=0;i<pow(2,height)-1;i++){
				if(status[i]==1){
					cout << data[i] << " ";
				}
			}
		}
		
//		void preOrder(){
//			if(status[0]==1){
//				preOrder(0);
//			}
//		}
//		
		void preOrder(int i){
				cout << data[i] << " ";
			if(2*i+1<pow(2,height)-1 && status[2*i+1]==1){
				preOrder(2*i+1);
			}
			if(2*i+2<pow(2,height)-1 && status[2*i+2]==1){
				preOrder(2*i+2);
			}
		}
		
		void inOrder(int i){
			if(2*i+1<pow(2,height)-1 && status[2*i+1]==1){
				inOrder(2*i+1);
			}
				cout << data[i] << " ";
			if(2*i+2<pow(2,height)-1 && status[2*i+2]==1){
				inOrder(2*i+2);
			}
		}
		
		void PostOrder(int i){
			if(2*i+1<pow(2,height)-1 && status[2*i+1]==1){
				preOrder(2*i+1);
			}
			if(2*i+2<pow(2,height)-1 && status[2*i+2]==1){
				preOrder(2*i+2);
			}
				cout << data[i] << " ";
			}
		
};
int main(){
	
	BinaryTree b1(5);
	b1.setRoot(8);
	b1.setLeftChild(8,9);
	b1.setRightChild(8,8);
	b1.setLeftChild(9,4);
	b1.setRightChild(9,7);
	b1.setLeftChild(8,4);
	b1.setRightChild(8,2);
	
	b1.levelOrderPrint();
	cout << endl;
	b1.preOrder(0);
	cout << endl;
	b1.inOrder(0);
	cout << endl;
	b1.PostOrder(0);
	cout << endl;
	return 0;
	
}