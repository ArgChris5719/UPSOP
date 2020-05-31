#include "Timetable.h"
#include "User.h"

#include <vector>
#include <iostream>

using namespace std;
//class User;
Timetable :: Timetable(){
    cout << "New Timetable with no information" << endl;
}

Timetable :: Timetable(Class* c, string s, User u){
    setClasses(c);
    setName(s);
    setTT_owner(u);

    cout << "New Timetable named: " << getName() << endl;
    cout << "For User: " << getTT_owner()->getUsername() << endl;
}

vector<Class*> Timetable :: getClasses(){
    return classes;
}

string Timetable :: getName(){
    return name;
}

User* Timetable :: getTT_owner(){
    return tt_owner;
}

void Timetable :: setClasses(Class* c){
    classes.push_back(c);
}

void Timetable :: setName(string s){
    name =s;
}

void Timetable :: setTT_owner(User u){
    *tt_owner = u;
}
