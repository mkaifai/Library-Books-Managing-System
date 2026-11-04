#include "../Header Files/input.h"
#include <iostream>
#include <limits>
using namespace std;
int ReadInteger(const string& prompt){int n;while(true){cout<<prompt;if(cin>>n){cin.ignore(numeric_limits<streamsize>::max(),'\n');return n;}cout<<"Please enter a valid number.\n";cin.clear();cin.ignore(numeric_limits<streamsize>::max(),'\n');}}
string ReadText(const string& prompt){string s;cout<<prompt;getline(cin,s);return s;}
