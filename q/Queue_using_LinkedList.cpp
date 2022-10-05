
#include<bits/stdc++.h>
using namespace std;
template<typename T>
class node{
public:
	T data;
	node<T>* next;
	node(T val){
		data = val;
		next = NULL;
	} 
};
template<typename T>
class QueueUsingLL{
	node<T>* head;
	node<T>* tail;
	int size;
public:
	QueueUsingLL(){
		head = NULL;
		tail = NULL;
		size = 0;
	}
	int QueueSize(){
		return size;
	}
	bool IsEmpty(){
		return size == 0;
	}
	void enqueue(int val){
		node<T>* n = new node<T>(val);
		if(head == NULL){
			head = n;
			tail = n;
			
		}else{
		tail->next = n;
		tail = n;
	}
	size++;
	}
	T dequeue(){
		if(IsEmpty()){
			cout<<"Queue is empty";
			return 0;
		}
		if(size == 1){
			node<T>* temp = head;
			T x = temp->data;
			delete temp;
			size--;
			return x;
		}
		node<T>* temp = head;
		T x = temp->data;
		head = head->next;
		delete temp;
		size--;
		return x;
	}
	T front(){
		if(IsEmpty()){
			cout<<"Queue is empty";
			return 0;
		}
		return head->data;
	}

};
int main(){
	QueueUsingLL<int> q;
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.enqueue(40);// queue is full
	cout<<q.dequeue()<<endl;//10
	cout<<q.IsEmpty()<<endl;//0
	cout<<q.QueueSize()<<endl;//2
	cout<<q.dequeue()<<endl;//20
	cout<<q.dequeue()<<endl;//30
	cout<<q.dequeue()<<endl;//queue is empty

		return 0;
}
