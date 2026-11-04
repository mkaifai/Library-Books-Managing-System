#include "../Header Files/status.h"
#include <iostream>
using namespace std;
void ShowStatus(const LinkedList& l){cout<<"Status: "<<(l.IsEmpty()?"Empty":"Not empty")<<endl<<"Total items: "<<l.GetCount()<<endl;}
