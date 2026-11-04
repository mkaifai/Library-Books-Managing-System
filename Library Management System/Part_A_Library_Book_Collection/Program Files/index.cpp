#include <iostream>
#include "../Header Files/linked_list.h"
#include "../Header Files/menu.h"
#include "../Header Files/actions.h"
#include "../Header Files/input.h"
using namespace std;
int main(){LinkedList list;list.InsertAt(CreateItem(103,"Operating Systems"),0);list.InsertAt(CreateItem(101,"Data Structures"),1);list.InsertAt(CreateItem(105,"Computer Networks"),2);int choice;do{ShowMenu();choice=ReadInteger("Enter your choice: ");RunChoice(list,choice);}while(choice!=10);return 0;}
