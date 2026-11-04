#include "../Header Files/linked_list.h"
LinkedList::LinkedList():head(0),count(0){}
LinkedList::~LinkedList(){while(!IsEmpty()) delete Remove();}
ItemNode* LinkedList::GetNodeAt(int n) const {ItemNode* p=head;for(int i=0;i<n && p;i++)p=p->next;return p;}
bool LinkedList::IsEmpty() const{return head==0;}
bool LinkedList::IsNotEmpty() const{return head!=0;}
int LinkedList::GetCount() const{return count;}
ItemNode* CreateItem(int id,const string& name){ItemNode* p=new ItemNode;p->id=id;p->name=name;p->next=0;return p;}
