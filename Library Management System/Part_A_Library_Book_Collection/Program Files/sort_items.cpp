#include "../Header Files/linked_list.h"
#include <utility>
void LinkedList::Sort(){for(ItemNode* i=head;i;i=i->next)for(ItemNode* j=i->next;j;j=j->next)if(i->id>j->id){swap(i->id,j->id);swap(i->name,j->name);}}
