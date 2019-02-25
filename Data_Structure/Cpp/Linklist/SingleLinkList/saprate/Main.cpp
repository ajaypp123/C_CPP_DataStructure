#include "Linklist.h"
#include<iostream>
using namespace std;

int main(){
	Linklist<int> ll;
	int ch = 0;
	char loop = 1;
	int data;
	int pos;
	while(loop){
		cout<<"Menu:\n1.AddBegin\n2.AddEnd\n3.DeleteBegin\n4.DeleteEnd\n5.Display\n6.Size\n7.Reverse\n8.AddAtPos\n9.DeleteAtPos\n10.ReverseList\n11.Exit\n";
		cin>>ch;
		switch(ch){
			case 1:
				cout<<"Enter Element : \n";
				cin>>data;
				ll.AddBegin(data);
				break;
			case 2:
				cout<<"Enter Element : \n";
				cin>>data;
				ll.AddEnd(data);
				break;
			case 3:
				ll.DeleteBegin();
				cout<<"Deleted...";
				break;
			case 4:
				ll.DeleteEnd();
				break;
			case 5:
				ll.Display();
				break;
			case 6:
				cout<<ll.size()<<"\n";
				break;
			case 7:
				ll.Reverse(ll.getHead());
				break;
			case 8:
				cout<<"Enter Pos and data:\n";
				cin>>pos>>data;
				ll.AddAtPos(pos,data);
				break;
			case 9:
				cout<<"Enter Pos : \n";
				cin>>pos;
				ll.DeleteAtPos(pos);
				break;
			case 10:
			//	ll.ReverseList(ll.getHead());
				break;
			case 11:
				loop = 0;
				break;
			default:
				cout<<"Enter correct choice...";
		}
	}
	return 0;
}
