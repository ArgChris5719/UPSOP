#include "ProfilePic.h"
#include "User.h"
#include <iostream>
#include <string>

using namespace std;
ProfilePic :: ProfilePic(){
    cout << "New ProfilePic with no information" << endl;
}

ProfilePic :: ProfilePic(User* u, string s, string p){
    setBelongs_to(u);
    setImgSource(s);
    checkImgSource();
    setPath(p);
    checkFileType();
    cout << "ProfilePic for User: " << getBelongs_to()->getUsername() << endl;
    cout << "ImgSource: " << getImgSource() << endl;
    cout << "ImgType: " << getType() << endl;
    cout << "ImgPath: " << getPath() << endl;

}

ProfilePic::~ProfilePic(){
    cout << "Profile Picture deleted.\n";
}




User* ProfilePic :: getBelongs_to(){
    return belongs_to;
}

string ProfilePic :: getImgSource(){
    return ImgSource;
}

string ProfilePic :: getPath(){
    return path;
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

void ProfilePic :: setPath(string s){
    path = s;
}

void ProfilePic :: setSize(double d){
    size = d;
}

void ProfilePic :: setType(string p_type){
    type = p_type;
}

void ProfilePic :: checkImgSource(){
    if (getImgSource() != "Device" && getImgSource() != "Web"){
        cout << "Wrong Img Source" << endl;
        int choice;
        cout << "Press '1' if the Image was from device." <<endl;
        cout << "Press '2' if the Image was from the web." <<endl;
        cout << "Make your choice: " ;
        cin >> choice;
        switch(choice){
            case 1:
                setImgSource("Device");
            case 2:
                setImgSource("Web");
            default:
                checkImgSource();
        }
    }

}


void ProfilePic :: checkFileType(){
    string s = getPath();
    string n = "";
    for(int i = s.size() - 1; i >= 0; i--){
        if (s[i] != '.'){
            n.append(1u, s[i]); //Adds the character once
        }
        else break;
    }
    s = "";
    int j = 0;
    for( int i = n.size()-1; i >= 0; i--){
        s[j] = n[i];
    }
    setType(s);
}

void ProfilePic :: FileTypeErrorMsg(){
    cout << "Invalid Filetype" << endl;
    cout << "Object is being deleted" << endl;
    delete this;
}

void ProfilePic :: ImgPreview(){
    cout << "ProfilePic for User: " << getBelongs_to()->getUsername() << endl;
    cout << "ImgSource: " << getImgSource() << endl;
    cout << "ImgType: " << getType() << endl;
    cout << "ImgPath: " << getPath() << endl;
}
