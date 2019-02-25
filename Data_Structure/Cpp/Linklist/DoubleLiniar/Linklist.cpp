#include "Linklist.h"

template<class T>
		Linklist<T>::Linklist(){
			head = NULL;
			tail = NULL;
			count = 0;
		}
		
template<class T>
		Linklist<T>::~Linklist(){
			Node<T> *temp;
			temp = head;
			while(head != NULL){
				head = head->getNext();
				delete temp;
				temp = head;
			}
		}

template<class T>
		bool Linklist<T>::isEmpty(){
			return (head == NULL && tail==NULL);
		}

template<class T>
		int Linklist<T>::size(){
			return count;
		}

template<class T>
		void Linklist<T>::AddBegin(T data){
			Node<T> *temp = new Node<T>;
			if(isEmpty()){
				temp->setNext(NULL);
				temp->setPrev(NULL);
				temp->setData(data);
				head = temp;
				tail = temp;	
			}else{
				temp->setNext(head);
				temp->setPrev(NULL);
				temp->setData(data);
				head->setPrev(temp);
				head = temp;	
			}
			count++;
		}
		
template<class T>
		void Linklist<T>::AddEnd(T data){
                        Node<T> *temp = new Node<T>;
                        if(isEmpty()){
                                temp->setNext(NULL);
				temp->setPrev(NULL);
				temp->setData(data);
				head = temp;
				tail = temp;
                        }else{
                                tail->setNext(temp);
                                temp->setNext(NULL);
				temp->setPrev(tail);
				temp->setData(data);
				tail = temp;
                        }
                        count++;
                }	
	
template<class T>
		void Linklist<T>::DeleteBegin(){
                        Node<T> *temp = new Node<T>;
                        if(isEmpty()){
				cout<<"\nList is Empty...\n";
                        }else{
				temp = head;
                                head = head->getNext();
				head->setPrev(NULL);
                        }
			delete temp;
                        count--;
                }

template<class T>
		void Linklist<T>::DeleteEnd(){
                        Node<T> *n = new Node<T>;
                        if(isEmpty()){
                                cout<<"\nList is Empty...\n";
                        }else{
                                n = tail;
				tail = tail->getPrev();
				tail->setNext(NULL);
				delete n;
                        }
                        count--;
                }
	
template<class T>
		void Linklist<T>::Display(){
			Node<T> *temp = new Node<T>;
			if(isEmpty()){
				cout<<"\nList is Empty.";
			}else{
				temp = head;
				while(temp != NULL){
					cout<<"\n"<<temp->getData();
					temp = temp->getNext();
				}				
			}
			cout<<"\n";
		}
			
template<class T>
		void Linklist<T>::AddAtPos(int pos,T data){
			Node<T> *temp = new Node<T>;
			Node<T> *p = new Node<T>;
			Node<T> *n = new Node<T>;
			if(pos >= count+2){
				cout<<"\nWrong";
			}else{
				n = head;
				while(pos >= 2){
					p = n;
					n = n->getNext();
					pos--;	
				}
				temp->setData(data);
				temp->setNext(n);
				temp->setPrev(p);
				p->setNext(temp);
				n->setPrev(temp);
			}
			count++;
		}
		
template<class T>
		void Linklist<T>::DeleteAtPos(int pos){
                        Node<T> *p = new Node<T>;
                        Node<T> *n = new Node<T>;
			Node<T> *temp = new Node<T>;
                        if(pos > count){
                                cout<<"\nWrong";
                        }else{
                                n = head;
                                while(pos > 1){
                                        p = n;
                                        n = n->getNext();
                                        pos--;
                                }
				temp = n->getNext();
                                p->setNext(temp);
				temp->setPrev(p);
				delete n;
                        }
                        count--;
                }		
		


template class Linklist<int>;								
