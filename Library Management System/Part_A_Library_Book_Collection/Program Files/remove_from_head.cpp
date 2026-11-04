#include "../Header Files/linked_list.h"
ItemNode* LinkedList::Remove(){if(IsEmpty())return 0;ItemNode* p=head;head=head->next;p->next=0;count--;return p;}
