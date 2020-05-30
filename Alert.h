#ifndef ALERT_H_INCLUDED
#define ALERT_H_INCLUDED
#include <vector>

using namespace std;


class User;

class Alert{
private:
    vector<User*> user_list;
    string source;
    string alert_msg;
public:    
    Alert();
    Alert(vector<User*>, string, string);
    ~Alert();

    //Get methods
    vector<User*> getUser_list();
    string getSource();
    string getAlert_msg();

    //Set methods

    void setUser_list(vector<User*>);
    void setSource(string);
    void setAlert_msg();

    void ShowTimetable();
    void EditErrorMsg();
    void ValidationErrorMsg();
    void SaveChanges();
    void ChangesErrorMsg();
};


#endif 