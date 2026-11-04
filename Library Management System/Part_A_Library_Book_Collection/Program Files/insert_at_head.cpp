#include "../Header Files/linked_list.h"
void LinkedList::Insert(ItemNode* p){if(!p)return;p->next=head;head=p;count++;}
