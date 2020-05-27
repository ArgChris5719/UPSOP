#ifndef MESSAGE_H_INCLUDED
#define MESSAGE_H_INCLUDED
#include <vector>

using namespace std;

class User;

class Message{
private:
    User& msg_from;
    User& msg_to;
    string text;
    bool pinned = false;


public:
    Message();
    Message(User, User, string);
    ~Message();

    //Get methods

    User& getMsg_from();
    User& getMsg_to();
    string getText();
    bool getPinnedStatus();

    //Set methods

    void setMsg_from(User);
    void setMsg_to(User);
    void setText(string);
    void setPinnedStatus(bool);
};



#endif