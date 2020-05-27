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
    
    
    /* 
    	Set-Get Methods
						*/
	
    //		AM
    void setAM(int a){
    	AM = a;
    }

    int getAM(){
    	return AM;
    }

    //		overall_score
    void setOverallScore(int os){
    	overall_score = os;
    }

    int getOverallScore(){
    	return overall_score;
    }

    //		yearly_score
    void setYearlyScore(int ys){
    	yearly_score = ys;
    }

    int getYearlyScore(){
    	return yearly_score;
    }

    //		semester_score
    void setSemesterScore(int ss){
    	semester_score = ss;
    }

    int getSemesterScore(){
    	return semester_score;
    }

    //		overall_rank
    void setOverallRank(int ovr){
    	overall_rank = ovr;
    } 

    int getOverallRank(){
    	return overall_rank;
    }

    //		yearly_rank
    void setYearlyRank(int yr){
    	yearly_rank = yr;
    }

    int getYearlyRank(){
    	return yearly_rank;
    }


    //		semester_rank
    void setSemesterRank(int sr){
    	semester_rank = sr;
    }

    int getSemesterRank(){
    	return semester_rank;
    }


};


#endif 
