#ifndef GROUP_H_INCLUDED
#define GROUP_H_INCLUDED
#include <vector>

using namespace std;

class Student;
class Message;

class Group{
private:
    string name;
    vector<Student*> members;
    vector<Message*> msg_history;
    vector<Message*> pinned_msgs;

public:
    Group();
    Group(string, vector<Student*>);
    ~Group();

    //Get methods

    string getName();
    vector<Student*> getMembers();
    vector<Message*> getMsg_history();
    vector<Message*> getPinned_msgs();

    //Set methods

    void setName(string);
    void setMembers(Student);
    void setMsg_history(Message);
    void setPinned_msgs(Message);

};



#endif