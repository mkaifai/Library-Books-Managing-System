#include "../Header Files/linked_list.h"
void LinkedList::Reverse(){ItemNode* prev=0;ItemNode* cur=head;while(cur){ItemNode* next=cur->next;cur->next=prev;prev=cur;cur=next;}head=prev;}
