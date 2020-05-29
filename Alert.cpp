#include "Alert.h"

#include <vector>
#include <iostream>

using namespace std;

Alert :: Alert(){
    cout << "New Alert with no information" << endl;
}

Alert :: Alert(int i, string a, string b){
    setAlertID(i);
    setSource(a);
    setAlert_msg(b);
    cout << "New Alert with ID:  " << getAlertID() << endl;
    cout << "Source: " << getSource() << endl;
    cout << "Message: \" " << getAlert_msg() << " \" " << endl;
}

int Alert :: getAlertID(){
    return AlertID;
}

vector<User*> Alert :: getUser_list(){
    return user_list;
}

string Alert :: getSource(){
    return source;
}

string Alert :: getAlert_msg(){
    return alert_msg;
}

void Alert :: setAlertID(int i){
    AlertID = i;
}

void Alert :: setUser_list(User* u){
    user_list.push_back(u);
}

void Alert :: setSource(string s){
    source = s;
}

void Alert :: setAlert_msg(string s){
    alert_msg = s;
}

