#ifndef ALERT_H_INCLUDED
#define ALERT_H_INCLUDED
#include <vector>
#include <iostream>

using namespace std;


class User;

class Alert{
private:
    int AlertID;
    vector<User*> user_list;
    string source;
    string alert_msg;
public:    
    Alert();
    Alert(int, string, string);
    ~Alert();

    //Get methods
    int getAlertID();
    vector<User*> getUser_list();
    string getSource();
    string getAlert_msg();

    //Set methods
    void setAlertID(int);
    void setUser_list(User*);
    void setSource(string);
    void setAlert_msg(string);

    void ShowTimetable(); //User -> AlertList -> User.getCustom_TT()
    void EditErrorMsg(); //Admin -> Alert.setAlert_msg()
    void ValidationErrorMsg(); // wait for input
    void SaveChanges(); 
    void ChangesErrorMsg(); // Admin -> Alert.setSource()
};


#endif 