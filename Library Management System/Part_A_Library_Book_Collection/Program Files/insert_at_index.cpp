#include "../Header Files/linked_list.h"
void LinkedList::InsertAt(ItemNode* p,int n){if(!p)return;if(n<0)n=0;if(n>count)n=count;if(n==0){Insert(p);return;}ItemNode* prev=GetNodeAt(n-1);p->next=prev->next;prev->next=p;count++;}
