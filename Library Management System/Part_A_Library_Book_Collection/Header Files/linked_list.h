#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#include <string>
using namespace std;
struct ItemNode { int id; string name; ItemNode* next; };
class LinkedList {
private: ItemNode* head; int count; ItemNode* GetNodeAt(int index) const;
public:
 LinkedList(); ~LinkedList(); bool IsEmpty() const; bool IsNotEmpty() const; int GetCount() const;
 void Insert(ItemNode* item); ItemNode* Remove(); void InsertAt(ItemNode* item,int index);
 ItemNode* RemoveAt(int index); void Swap(int a,int b); void Sort(); void Reverse(); void Print() const;
};
ItemNode* CreateItem(int id,const string& name);
#endif
