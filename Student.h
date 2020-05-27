#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED
#include <vector>

using namespace std;

class Alert;
class Room;
class Group;
class Post;
class Conversation; 

class Student: public User{
private:
    vector<Group*> belongs_in;
    vector<Room*> follows;
    vector<Post*> activity;

    int AM;
    int overall_score;
    int yearly_score;
    int semester_score;

    int overall_rank;
    int yearly_rank;
    int semester_rank;
public:

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
    
    
    /* 
    	  Set-Get Methods
		             */
	
    void setAM(int);
    int getAM();
    void setOverallScore(int);
    int getOverallScore();
    void setYearlyScore(int);
    int getYearlyScore();
    void setSemesterScore(int);
    int getSemesterScore();
    void setOverallRank(int);
    int getOverallRank();
    void setYearlyRank(int);
    int getYearlyRank();
    void setSemesterRank(int);
    int getSemesterRank();

};


#endif 
