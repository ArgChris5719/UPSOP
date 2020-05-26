#ifndef ALERT_H_INCLUDED
#define ALERT_H_INCLUDED
#include<vector>

using namesace std;


class User;

class Alert{
private:
    vector<User*> user_list;
    
public:    
    string source;
    string alert_msg;

    void ShowTimetable();
    void EditErrorMsg();
    void ValidationErrorMsg();
    void SaveChanges();
    void ChangesErrorMsg();
};


#endif 