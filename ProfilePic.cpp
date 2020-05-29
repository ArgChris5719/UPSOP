#include "ProfilePic.h"
#include "User.h"
#include <iostream>

using namespace std;

ProfilePic :: ProfilePic(){
    cout << "New ProfilePic with no information" << endl;
}

ProfilePic :: ProfilePic(User* u, string s, string t){
    setBelongs_to(u);
    setImgSource(s);
    setType(t);

    cout << "New ProfilePic for User: " << getBelongs_to()->getUsername() << endl;
    cout << "ImgSource: " << getImgSource() << endl;
    cout << "ImgType: " << getType() << endl;
}

User* ProfilePic :: getBelongs_to(){
    return belongs_to;
}

string ProfilePic :: getImgSource(){
    return ImgSource;
}

string ProfilePic :: getType(){
    return type;
}

double ProfilePic :: getSize(){
    return size;
}

void ProfilePic :: setBelongs_to(User* u){
    belongs_to = u;
}

void ProfilePic :: setImgSource(string s){
    ImgSource = s;
}

void ProfilePic :: setSize(double d){
    size = d;
}


