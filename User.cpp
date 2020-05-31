#include "User.h"
//#include "Timetable.h"
#include <iostream>
//#include <vector>

using namespace std;

extern vector<User> user_db;
/* * * * * * * * * * * * * * * * * * * * * *
*				 						   *
*				 						   *
*					USER     			   *
*				 						   *
*				 						   *
 * * * * * * * * * * * * * * * * * * * * * */



inline User::User(){
    username="John Smith";
    email="Matrix";
    cout << "A new user is born !\n" << username << " at " << email << endl;
    user_db.push_back(*this);
    UserID = user_db.size();
    cout << "ID: " << UserID << endl;
}

inline User::User(string un, string mail,string pass){
    username=un;
    email=mail;
    password=pass;
    cout << "A new user is born !\n" << username << " at " << email << endl;
    user_db.push_back(*this);
    UserID = user_db.size();
    cout << "ID: " << UserID << endl;

}

//inline User::~User(){
    //cout << username << " deleted!\n";
    //user_db.erase(user_db.begin()+UserID-1);

//}




/* * * * * * * * * * * * * * * * * * * * * * *
*						 					 *
*						 					 *
*		  			STUDENT        			 *
*						 					 *
*						 					 *
 * * * * * * * * * * * * * * * * * * * * * * */

 //  AM
inline void Student::setAM(int a){
	AM = a;
}

inline int Student::getAM(){
	return AM;
}

    //		overall_score
inline void Student::setOverallScore(int os){
	overall_score = os;
}

inline int Student::getOverallScore(){
	return overall_score;
}

    //		yearly_score
inline void Student::setYearlyScore(int ys){
	yearly_score = ys;
}

inline int Student::getYearlyScore(){
	return yearly_score;
}

    //		semester_score
inline void Student::setSemesterScore(int ss){
	semester_score = ss;
}

inline int Student::getSemesterScore(){
	return semester_score;
}

    //		overall_rank
inline void Student::setOverallRank(int ovr){
	overall_rank = ovr;
}

inline int Student::getOverallRank(){
	return overall_rank;
}

    //		yearly_rank
inline void Student::setYearlyRank(int yr){
	yearly_rank = yr;
}

inline int Student::getYearlyRank(){
	return yearly_rank;
}


    //		semester_rank
inline void Student::setSemesterRank(int sr){
	semester_rank = sr;
}

inline int Student::getSemesterRank(){
	return semester_rank;
}
