#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED
#include<vector>

using namesace std;

class Alert;
class Room;
class Group;
class Post;

class Student: public User{
private:
    vector<Group*> belongs_in;
    vector<Room*> follows;
    vector<Post*> activity;
public:
    int AM;
    int overall_score;
    int yearly_score;
    int semester_score;

    int overall_rank;
    int yearly_rank;
    int semester_rank;

    Student();
    Student(User*, int);
    ~Student();

    void Create_Group();
    void Save_Group();
    Student* SearchStudents();
    void EditGroupRole();
    void StudentsAccept();
    void StudentsDecline();
    void ShowMsgofAcceptance();
    void ErrorMsg();
    void CreateOwnTimetable();
    void EditAlerts();
    void SaveChanges();
    void editinfo();


};
