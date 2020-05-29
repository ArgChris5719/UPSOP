#include "Conversation.h"

#include <vector>
#include <iostream>

using namespace std;

Conversation :: Conversation(){
    cout << "New Conversation with no information" << endl;
}

Conversation :: Conversation(int i, Room* r, Post* p){
    setConvID(i);
    setRoom(r);
    setPosts(p);
    cout << "New Conversation with ID = " << getConvID() << endl;
}

Room* Conversation :: getRoom(){
    return inRoom;
}

vector<Post*> Conversation :: getPosts(){
    return posts;
}

vector<string> Conversation :: getKeywords(){
    return keywords;
}

int Conversation :: getConvID(){
    return ConvID;
}

void Conversation :: setRoom(Room* r){
    inRoom = r;
}

void Conversation :: setPosts(Post* p){
    posts.push_back(p);
}

void Conversation :: setKeywords(string s){
    keywords.push_back(s);
}

void Conversation :: setConvID(int i){
    ConvID = i;
}
