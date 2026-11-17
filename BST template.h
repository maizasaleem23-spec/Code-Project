#include<iostream>
#include<string>
using namespace std;
template<class T>
class Node
{
	public:
		T info;
		Node*left;
	    Node*right;
	Node(T value){
		info=value;
		left=right=nullptr;
	}
};
template<class T>
class BST
{
	private:
		Node<T>*root;
	public:
		BST(){
			root=nullptr;
		}
		void insert(T key){
			if(!root){
				root=new Node<T>(key);
				return;
			}
			Node<T>*curr=root;
			Node<T>*p=nullptr;
			while(curr!=nullptr){
			if(key<curr->info){
				p=curr;
				curr=curr->left;
			}
			else{
				p=curr;
				curr=curr->right;
			}
		}
			if(p->info<key){
				p->right=new Node<T>(key);
			}
			else{
				p->left=new Node<T>(key);
			}
	}
		
		bool SearchHelper(Node<T>*r,T key){
			if(!r){
				return false;
			}
			if(r->info==key){
				return true;
			}
			if(key<r->info){
			return SearchHelper(r->left,key);
		}
		if(key>r->info){
			return SearchHelper(r->right,key);
		}
		return false;
	}
		bool Search(T key){
			return SearchHelper(root,key);
		}
		int findMin(Node<T>*r){
			if(!r){
				return 0;
			}
		 Node<T>*curr=r;
		 int min=curr->info;
		 while(curr!=nullptr){
		 	if(curr->info<min){
		 		min=curr->info;
			 }
			 curr=curr->left;
		 }
		 return min;
	}
	int findmin(){
		return findMin(root);
	}
		
		int findMax(Node<T>*r){
			if(!r){
				return 0;
			}
		 Node<T>*curr=r;
		 int max=curr->info;
		 while(curr!=nullptr){
		 	if(curr->info>max){
		 		max=curr->info;
			 }
			 curr=curr->right;
		 }
		 return max;
	}
	int findmax(){
		return findMax(root);
	}
};