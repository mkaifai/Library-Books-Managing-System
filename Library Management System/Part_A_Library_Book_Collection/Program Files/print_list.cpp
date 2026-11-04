#include "../Header Files/linked_list.h"
#include <iostream>
using namespace std;
void LinkedList::Print() const {if(IsEmpty()){cout<<"List is empty.\n";return;}cout<<"\nIndex\tID\tName\n";ItemNode* p=head;int i=0;while(p){cout<<i<<"\t"<<p->id<<"\t"<<p->name<<endl;p=p->next;i++;}cout<<"Total items: "<<count<<endl;}
