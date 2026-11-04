#include "../Header Files/actions.h"
#include "../Header Files/input.h"
#include "../Header Files/status.h"
#include <iostream>
using namespace std;
void RunChoice(LinkedList& l,int c){int id,n,a,b;string name;ItemNode* removed;switch(c){
case 1:l.Print();break;
case 2:id=ReadInteger("Enter ID: ");name=ReadText("Enter name/title: ");l.Insert(CreateItem(id,name));cout<<"Inserted at head.\n";break;
case 3:removed=l.Remove();if(removed){cout<<"Removed: "<<removed->name<<endl;delete removed;}else cout<<"List is empty.\n";break;
case 4:id=ReadInteger("Enter ID: ");name=ReadText("Enter name/title: ");n=ReadInteger("Enter index: ");l.InsertAt(CreateItem(id,name),n);cout<<"Inserted.\n";break;
case 5:n=ReadInteger("Enter index: ");removed=l.RemoveAt(n);if(removed){cout<<"Removed: "<<removed->name<<endl;delete removed;}else cout<<"List is empty.\n";break;
case 6:a=ReadInteger("First index: ");b=ReadInteger("Second index: ");l.Swap(a,b);cout<<"Swap attempted; indexes must be valid.\n";break;
case 7:l.Sort();cout<<"Sorted by ID.\n";break;
case 8:l.Reverse();cout<<"List reversed.\n";break;
case 9:ShowStatus(l);break;
case 10:cout<<"Goodbye!\n";break;
default:cout<<"Invalid choice. Select 1-10.\n";}}
