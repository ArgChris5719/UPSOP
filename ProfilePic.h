#ifndef PROFILEPIC_H_INCLUDED
#define PROFILEPIC_H_INCLUDED

#include <vector>
#include <iostream>


using namespace std;

class User;

class ProfilePic{
private:
    User * belongs_to;
    string ImgSource;
    string type;
    string path;
    double size;

public:
    ProfilePic();
    ProfilePic(User*, string, string);
    ~ProfilePic();

    //Get methods

    User * getBelongs_to();
    string getImgSource();
    string getType();
    double getSize();
    string getPath();

    //Set methods

    void setBelongs_to(User*);
    void setImgSource(string);
    void setType(string);
    void setSize(double);

    void checkImgSource();
    void checkFileType();
    bool checkFileSize(string);
    void askForEditing();
    void ImgPreview();
    void addToProfilePicList();
    void FileTypeErrorMsg(); //Waits for user to input his file path again
    string FileSizeErrorMsg();
    void setPath(string);

};

#endif
