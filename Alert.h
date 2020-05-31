#ifndef ALERT_H_INCLUDED
#define ALERT_H_INCLUDED
#include <vector>
#include <iostream>

using namespace std;


class User;

class Alert{
private:
    vector<User*> user_list;
    string source;
    string alert_msg;
    int AlertID;
public:
    Alert();
    Alert(int, string, string);
    ~Alert();

    //Get methods
    vector<User*> getUser_list();
    string getSource();
    string getAlert_msg();
    int getAlertID();

    //Set methods

    void setUser_list(User*);
    void setSource(string);
    void setAlert_msg(string);
    void setAlertID(int);

    void ShowTimetable();
    void EditErrorMsg();
    void ValidationErrorMsg();
    void SaveChanges();
    void ChangesErrorMsg();
};


#endif
