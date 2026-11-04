#include "../Header Files/linked_list.h"
#include <utility>
void LinkedList::Swap(int a,int b){if(a<0||b<0||a>=count||b>=count||a==b)return;ItemNode* x=GetNodeAt(a);ItemNode* y=GetNodeAt(b);swap(x->id,y->id);swap(x->name,y->name);}
