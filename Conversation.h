#ifndef CONVERSATION_H_INCLUDED
#define CONVERSATION_H_INCLUDED
#include <vector>
#include <iostream>

using namespace std;

class Class;
class Professor;
class Room;
class Post;


class Conversation{
private:
    Room* inRoom;
    vector<Post*> posts;
    vector<string> keywords;

public: 
    int ConvID;

    Conversation();
    Conversation(int, Room*, Post*);
    ~Conversation();
    
    //Get methods

    Room* getRoom();
    vector<Post*> getPosts();
    vector<string> getKeywords();
    int getConvID();

    //Set methods

    void setRoom(Room*);
    void setPosts(Post*);
    void setKeywords(string);
    void setConvID(int);

    void create_post();


};

#endif