#include<iostream>
#include<vector>
using namespace std;

template <typename T>
class LinkList{
public:
	template <typename T>
	struct LinkNode{
		T val;
		LinkNode<T> *next;
		LinkNode(T i) : val(i), next(NULL){};
	};
	
	LinkList() :pHead(NULL), pTail(NULL){};
	LinkList(vector<T> v) : pHead(NULL), pTail(NULL){
		if (v.size() == 0)return;
		this -> pHead = new LinkNode<T>(v[0]);
		LinkNode<T>* pNode = pHead;
		pTail = pNode;
		for (int i = 1; i < (int)v.size(); i++){
			pNode->next = new LinkNode<T>(v[i]);
			pNode = pNode->next;
		}
		pTail = pNode;
	}
	void push_back(T v){
		if (pHead != NULL){
			pTail->next = new LinkNode<T>(v);
			pTail = pTail->next;
		}else{
			pHead = new LinkNode<T>(v);
			pTail = pHead;
		}

	}
	void Print(void){
		if (pHead == NULL)return;
		LinkNode<T>* pLN = pHead;
		while (pLN){
			cout << pLN->val << " ";
			pLN = pLN->next;
		}
		cout << endl;
	}
private:
	LinkNode<T>* pHead;
	LinkNode<T>* pTail;
};


int main(){
	vector<float> v = { 1.2f, 2.2f, 3.2f, 4.2f, 5.2f, 6.2f };
	LinkList<float> LinkList;

	LinkList.push_back(1.2f);
	LinkList.push_back(2.2f);
	LinkList.push_back(3.2f);

	LinkList.Print();

	system("pause");
}
