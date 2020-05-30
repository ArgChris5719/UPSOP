#include "Room.h"
#include "User.h"
#include <iostream>
#include <vector>

using namespace std;

Room :: Room(){
    cout << "New Room with no information" << endl;
}

Room :: Room(int i, string s, Professor* p){
    setRoomID(i);
    setTitle(s);
    setRoom_owner(p);
    cout << "New room with ID = " << getRoomID() << endl;
    cout << "Titled: \"" << getTitle() << "\"" << endl;
    cout << "Owner: " << getRoom_owner()->getUsername();
}

int Room :: getRoomID(){
    return RoomID;
}

Professor* Room :: getRoom_owner(){
    return room_owner;
}

Student* Room :: getAssigned_mod(){
    return assigned_mod;
}

vector<Conversation*> Room :: getConv_list(){
    return conv_list;
}

void Room :: setRoomID(int i){
    RoomID = i;
}

void Room :: setTitle(string s){
    title = s;
}


//new

string Room::getTitle(){
    return title;
}
void Room :: setRoom_owner(Professor* p){
    room_owner = p;
}

void Room :: setAssigned_mod(Student* s){
    assigned_mod = s;
}

void Room :: setConv_list(Conversation* c){
    conv_list.push_back(c);
}

