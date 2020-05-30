#ifndef PROFILEPIC_H_INCLUDED
#define PROFILEPIC_H_INCLUDED

#include <iostream>


using namespace std;

class User;

class ProfilePic{
private:
    User* belongs_to;
    string ImgSource;
    string path;
    string type;
    double size;

public: 
    ProfilePic();
    ProfilePic(User*, string, string);
    ~ProfilePic();

    //Get methods

    User* getBelongs_to();
    string getImgSource();
    string getPath();
    string getType();
    double getSize();

    //Set methods

    void setBelongs_to(User*);
    void setImgSource(string);
    void setPath(string);
    void setType(string);
    void setSize(double);

    void checkImgSource();
    void checkFileType();
    bool checkFileSize(string);
    void askForEditing();
    void ImgPreview();
    void addToProfilePicList();
    string FileTypeErrorMsg(); //Waits for user to input his file path again
    string FileSizeErrorMsg(); 

};

#endif