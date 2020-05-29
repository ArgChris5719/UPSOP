#include "Admin.h"
#include <vector>
#include <iostream>

using namespace std;


Admin :: Admin(){
    cout << "New Admin"<< endl;
}

vector<Class*> Admin :: getClasses(){
    return class_list;
}

void Admin :: setClasses(Class* c){
    class_list.push_back(c);
}