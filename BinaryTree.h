#ifndef BinaryTree_H
#define BinaryTree_H
#include <iostream>
#include <queue>
#include<stack>
using namespace std;
template <class T>
class Node
{
	public:
	T info;
	Node<T>*left;
	Node<T>*right;
    public:
    	Node(T n){
    		info=n;
    		left=nullptr;
    		right=nullptr;
		}
};
template<typename T>
class BinaryTree
{
	public:
		Node<T>*root;

		BinaryTree(){
			root=nullptr;
		}
		
		void setRoot(T r){
			if(!root){
				root=new Node<T>(r);
				return;
			}
		}
		
		Node<T>*findNode(Node<T>*r,T v){
			if(r==nullptr){
				return nullptr;
			}
			if(r->info==v){
				return r;
			}
			Node<T>*l=findNode(r->left,v);
			if(l){
				return l;
			}
			else{
				findNode(r->right,v);
			}
		}
		void setLeftChild(T p,T v){
			Node<T>* t=findNode(root,p);
			if(t!=nullptr && t->left==nullptr){
				t->left=new Node<T>(v);
			}
		}
		
		void setRightChild(T p,T v){
			Node<T>* t=findNode(root,p);
			if(t!=nullptr && t->right==nullptr){
				t->right=new Node<T>(v);
			}
		}
		
		void getParent(Node<T>*r){
			
		}
		void preOrderHelper(Node<T>*r){
			if(!r){
				return;
			}
			
			cout << r->info << " ";
			preOrderHelper(r->left);
			preOrderHelper(r->right);
		}
		void preOrder(){
			preOrderHelper(root);
		}
        void inOrderHelper(Node<T>*r){
        	if(!r){
        		return;
			}
			inOrderHelper(r->left);
			cout << r->info << " ";
			inOrderHelper(r->right);
		}
		void inOrder(){
			inOrderHelper(root);
		}
		
		void PostOrderHelper(Node<T>*r){
			if(!r){
				return;
			}
			PostOrderHelper(r->left);
			PostOrderHelper(r->right);
			cout << r->info << " ";
		}
		void PostOrder(){
			PostOrderHelper(root);
		}
		
	void LevelOrder(){
			if(!root){
				return;
			}
			queue<Node<T>*>q;
			q.push(root);
			while(!q.empty()){
				Node<T>*t=q.front();
				q.pop();
				cout << t->info << " ";
				if(t->left){
					q.push(t->left);
				}
				if(t->right){
					q.push(t->right);
				}
			}
		}
		bool isEmpty(){
		if(root==nullptr){
			return true;
		}
		else{
			return false;
		}
	}
		
		int countInternalNodes(Node<T>*r){
		if(!r){
			return 0;
		}
		if(r->left==nullptr && r->right==nullptr){
			return 0;
		}
		T l=countInternalNodes(r->left);																	
		T r1=countInternalNodes(r->right);
		return 1+l+r1;
	}
	
		int remove(T node){
		if(root==nullptr){
			return 0;
		}
		if(root==node){
			deleteTree(root);
			root=nullptr;
		}
		Node<T>*p=findParent(root,node);
		if(p->left!=nullptr && p->left->info==node){
			deleteTree(node);
			node=nullptr;
		}
		if(p->right!=nullptr && p->right->info==node){
			deleteTree(node);
			node=nullptr;
		}
	}
	T deleteTree(Node<T>*r){
		if(r==nullptr){
			return 0;
		}
		deleteTree(r->left);
		deleteTree(r->right);
		delete r;
	}

int displayDescendants(Node<T>* r, T v)
{
    if(!r)
        return 0;

    if(r->info == v)
    {
        if(r->left)
            cout << r->left->info << " ";

        if(r->right)
            cout << r->right->info << " ";

        displayDescendants(r->left, v);
        displayDescendants(r->right, v);
        return 0;
    }

    displayDescendants(r->left, v);
    displayDescendants(r->right, v);
}

int heightOfTree(Node<T>*r){
	if(r==nullptr){
		return 0;
	}
	T l=heightOfTree(r->left);
	T r1=heightOfTree(r->right);
	
	return 1+max(l,r1);
}

void displayParenthisizedView(Node<T>*r){
	if(r==nullptr){
		return;
	}
	cout << r->info << " ";
	if(r->left!=nullptr || r->right!=nullptr){
		cout <<"(";
		displayParenthisizedView(r->left);
		cout << ",";
		displayParenthisizedView(r->right);
		cout << ")";
	}
}
	
		int findMax(Node<T>*r){
		if(r==nullptr){
			return INT_MIN;
		}
		T l=findMax(r->left);
		T r1=findMax(r->right);
		T m=r->info;
		if(l>m){
			m=l;
		}
		if(r1>m){
			m=r1;
		}
		return m;
	}
	T findMin(Node<T>*r){
		if(r==nullptr){
			return INT_MAX;
		}
		T l=findMin(r->left);
		T h=findMin(r->right);
		T min=r->info;
		if(l<min){
			min=l;
		}
		if(h<min){
			min=h;
		}
		return min;
	}

bool displayAncestorsHelper(Node<T>*r,T v){
	if(r==nullptr){
		return false;;
	}
	if(r->info==v){
		return true;
	}
	if(displayAncestorsHelper(r->left,v)||
	   displayAncestorsHelper(r->right,v)){
	   	cout << r->info << " ";
	   	return true;
	   }
	   return false;
}

void displayAncestors(T v){
	if(!displayAncestorsHelper(root,v)){
		cout << "Node not found";
	}
}
T sumGreaterHelper(Node<T>*r,T k){
	T sum=0;
	if(!r){
		return 0;
	}
	if(r->info>k){
		sum+=r->info;
	}
	sum+=sumGreaterHelper(r->left,k);
	sum+=sumGreaterHelper(r->right,k);
	
	return sum;
}

T sumGreater(T v){
	return sumGreaterHelper(root,v);
}
//	bool isFull(){
//		bool flag=false;
//		if(root==nullptr){
//			return 0;
//		}
//		isFullh(root,flag);
//		return flag;
//	}
//		void isFullh(Node<T>*r,bool&flag){
//			if(r==nullptr){
//				return;
//			}
//		if(r->left!=nullptr && r->right!=nullptr){
//			flag=false;
//		}
//		if(r->left==nullptr && r->right==nullptr){
//			flag=true;
//		}
//		if(r->left!=nullptr){
//		isFullh(r->left,flag);
//	}
//	if(r->right!=nullptr){
//		isFullh(r->right,flag);
//	}
//	}

bool isFullBinaryTreeh(Node<T>*r){
	if(!r){
		return true;
	}
	
	if(!r->left&& !r->right){
		return true;
	}
	
	if(r->left==nullptr || r->right==nullptr){
		return false;
	}
		return isFullBinaryTreeh(r->left) && isFullBinaryTreeh(r->right);
}

int isFullBinaryTree(){
	return isFullBinaryTreeh(root);
}
int countSmaller(T v){
	int count=0;
	countSmallerHelper(root,v,count);
	return count;
	}
int countSmallerHelper(Node<T>*r,T v,int&count){
	if(!r){
		return 0;
	}
	if(r->info<v){
		count++;
	}
	countSmallerHelper(r->left,v,count);
	countSmallerHelper(r->right,v,count);
}

int countEqual(T v){
	int count=0;
	countEqualHelper(root,v,count);
	return count;
	}
void countEqualHelper(Node<T>*r,T v,int&count){
	if(!r){
		return;
	}
	if(r->info==v){
		count++;
	}
	countEqualHelper(r->left,v,count);
	countEqualHelper(r->right,v,count);
}

int countInRange(T a,T b){
	int count=0;
	countInRangeHelper(root,a,b,count);
	return count;
}

void countInRangeHelper(Node<T>*r,T a,T b,int&count){
	if(!r){
		return;
	}
	
	if(r->info>=a && r->info<=b){
		count++;
	}
	countInRangeHelper(r->left,a,b,count);
	countInRangeHelper(r->right,a,b,count);
}
int countLevel(int L){
	return countLevelHelper(root,0,L);
}
int countLevelHelper(Node<T>*p,int current,int L){
	if(!p){
		return 0;
	}
	if(current==L){
		return 1;
	}
	return countLevelHelper(p->left,current+1,L)+countLevelHelper(p->right,current+1,L);
}

int MirrorImage(){
	MirrorImageHelper(root);
}
void MirrorImageHelper(Node<T>*r){
	if(r==nullptr){
		return;
	}
Node<T>*temp;
temp=r->left;
r->left=r->right;
r->right=temp;
MirrorImageHelper(r->left);
MirrorImageHelper(r->right);
}
~BinaryTree(){
	deleteTree(root);
	root=nullptr;
}
};
	#endif
		