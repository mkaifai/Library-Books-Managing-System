#include "../Header Files/linked_list.h"
ItemNode* LinkedList::RemoveAt(int n){if(IsEmpty())return 0;if(n<0)n=0;if(n>=count)n=count-1;if(n==0)return Remove();ItemNode* prev=GetNodeAt(n-1);ItemNode* p=prev->next;prev->next=p->next;p->next=0;count--;return p;}
