#ifndef USER_H_INCLUDED
#define USER_H_INCLUDED
//#include "Timetable.h"
#include <vector>
#include <iostream>

using namespace std;


/* * * * * * * * * * * * * * * * * * * * * *
*				 						   *
*				 						   *
*					USER     			   *
*				 						   *
*				 						   *
 * * * * * * * * * * * * * * * * * * * * * */



class Alert;
class Timetable;
class Message;
class ProfilePic;
class Room;
class Conversation;

class User{
protected:
    string username;
private:
	vector<Alert*> AlertsList;
	Timetable * Custom_TT;
	vector<Message*> msg_history;
	int UserID;
	//string username;
	string email,password;
	vector<ProfilePic*> ProfPicList;
public:

	User();
	User(string, string,string);
	virtual ~User(){
        //cout << "Student " << username << " TERMINATED!\n";
	};

	//Get methods

	vector<Alert*> getAlertsList();
	Timetable& getCustom_TT();
	vector<Message*> getMsg_history();
	int getUserID();
	string getUsername(){
        return username;
	};
	string getEmail();
	vector<ProfilePic*> getProfilePicList();

	//Set methods

	void setAlertsList(Alert);
	void setCustom_TT(Timetable);
	void setMsg_history(Message);
	void setUserID(int);
	void setUsername(string);
	void setEmail(string);
	void setProfilePicList(ProfilePic);

	void change_prof_pic();
	string askImgSource();
	void createProfilePic(string);
	void post(Room*);
	Conversation* search_conv(int);

};



/* * * * * * * * * * * * * * * * * * * * * * *
*						 					 *
*						 					 *
*		  			STUDENT        			 *
*						 					 *
*						 					 *
 * * * * * * * * * * * * * * * * * * * * * * */





class Post;
class Group;



class Student: public User{
private:
    vector<Group*> belongs_in;

    vector<Room*> follows;
    vector<Post*> activity;

    int AM;
    int overall_score=0;
    int yearly_score=0;
    int semester_score=0;

    int overall_rank=0;
    int yearly_rank=0;
    int semester_rank=0;
public:

    Student(){
        cout << "Student!\n";
        cout << "Activity: " << activity.size() << "\n\n" ;
    };

    Student(User, int){
        //
    };
/*
    Student(string un,string mail,string pass):User(un,mail,pass){
        cout << "Specific Student!\n";
        cout << "Activity: " << activity.size() << "\n\n" ; // just to chack
    };
*/
        Student(string un,string mail, int am,string pass):User(un,mail,pass){
        cout << "Specific Student!\n";
        AM=am;
        cout << "AM: " << am << endl;
        cout << "Activity: " << activity.size() << "\n\n" ; // just to chack
    };

    ~Student(){
        cout << "Student " << username << " TERMINATED\n";
    };



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


/* * * * * * * * * * * * * * * * * * * *
*									   *
*									   *
*			   PROFESSOR			   *
*									   *
*									   *
*									   *
 * * * * * * * * * * * * * * * * * * * */

class Class;
class GradeList;



class Professor: public User{

private:
    vector<Room*> in_chargeOf;
    vector<Class*> class_list;
    vector<GradeList*> grades;

public:
    Professor(){
        cout << "A new generic professor has arrived...\n\n";
    };
    Professor(string un, string mail,string pass): User(un,mail,pass) {
        cout << "A new SPECIAL PROFESSOR has arrived!\n\n";
    }
    Professor(vector<Room*>, vector<Class*>, vector<GradeList*>);
    ~Professor(){
        cout << "Professor " << username << " TERMINATED\n";
    };

    //Get methods

    vector<Room*> getIn_chargeOf();
    vector<Class*> getClass_list();
    vector<GradeList*> getGrades();

    //Set methods

    void setIn_chargeOf(Room);
    void setClass_list(Class);
    void setGrades(GradeList);

    void confirm_as_prof();
    GradeList& grade();
    void show_classes();
    void choose_class();

};





#endif
