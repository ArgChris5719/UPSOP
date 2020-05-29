#include "Group.h"
#include "User.h"
#include <vector>
#include <iostream>

using namespace std;

Group :: Group(){
    cout << "New group with no info" << endl;
}

Group :: Group(string s, Student* first){
    setName(s);
    setMembers(first);
    cout << " New group named : " << getName() << endl;
    cout << "Created by: " <<first->getUsername() << endl;
}

string Group :: getName(){
    return name;
}

vector<Student*> Group :: getMembers(){
    return members;
}

vector<Message*> Group :: getMsg_history(){
    return msg_history;
}

vector<Message*> Group :: getPinned_msgs(){
    return pinned_msgs;
}

void Group :: setName(string s){
    name = s;
}

void Group :: setMembers(Student* a){
    members.push_back(a);
}

void Group :: setMsg_history(Message* m){
    msg_history.push_back(m);
}

void Group :: setPinned_msgs(Message* m){
    pinned_msgs.push_back(m);
}


