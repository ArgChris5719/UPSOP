#ifndef CONVERSATION_H_INCLUDED
#define CONVERSATION_H_INCLUDED
#include <vector>

using namespace std;

class Class;
class Professor;


class Conversation{
private:
    Room& inRoom;
    vector<Post*> posts;
    vector<string> keywords;

public: 
    int ConvID;

    Conversation();
    Conversation(Room, Post, string);
    ~Conversation();
    
    //Get methods

    Room& getRoom();
    vector<Post*> getPosts();
    vector<string> getKeywords();
    int getConvID();

    //Set methods

    void setRoom(Room);
    void setPosts(Post);
    void setKeywords(vector<string>);
    void setConvID(int);

    void create_post();


};

#endif