#ifndef ROOM_H_INCLUDED
#define ROOM_H_INCLUDED
 
#include <vector>
#include<iostream>

using namespace std;


class Professor;
class Student;
class Conversation;

class Room{
private:
    int RoomID;
    string title;
    Professor& room_owner;
    Student& assigned_mod;
    vector<Conversation*> conv_list;
public: 
    Room();
    Room(int, string, Professor);
    ~Room();

    //Get methods

    int getRoomID();
    string getTitle();
    Professor& getRoom_owner();
    Student& getAssigned_mod();
    vector<Conversation*> getConv_list();

    //Set methods

    void setRoomID(int);
    void setTitle(string);
    void setRoom_owner(Professor);
    void setAssigned_mod(Student);
    void setConv_list(Conversation);

    void create_post();
    void delete();
    void create_alert();
    void create_conversation();
    void add_post();

};

#endif