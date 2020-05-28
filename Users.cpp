#include "Users.h"
#include <iostream>
#include <vector>

using namespace std;


/* * * * * * * * * * * * * * * * * * * * * *
*				 						   *
*				 						   *
*					USER     			   *
*				 						   *
*				 						   *
 * * * * * * * * * * * * * * * * * * * * * */



inline User::User(){
    username="John Smith";
    email="unknown";
    cout << "I should not be here...\n";
}

inline User::User(string un, string mail){
    username=un;
    email=mail;
    cout << "A new user is born !\nThy name is " << username << " and thou shalt find him or her at " << email << endl;
}

inline User::~User(){
    cout << "User " << username << " deleted!\n";
}




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
