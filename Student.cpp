#include "Student.h"
#include <iostream>
#include <vector>


 //  AM
void Student::setAM(int a){
	AM = a;
}

int Student::getAM(){
	return AM;
}

    //		overall_score
void Student::setOverallScore(int os){
	overall_score = os;
}

int Student::getOverallScore(){
	return overall_score;
}

    //		yearly_score
void Student::setYearlyScore(int ys){
	yearly_score = ys;
}

int Student::getYearlyScore(){
	return yearly_score;
}

    //		semester_score
void Student::setSemesterScore(int ss){
	semester_score = ss;
}

int Student::getSemesterScore(){
	return semester_score;
}

    //		overall_rank
void Student::setOverallRank(int ovr){
	overall_rank = ovr;
} 

int Student::getOverallRank(){
	return overall_rank;
}

    //		yearly_rank
void Student::setYearlyRank(int yr){
	yearly_rank = yr;
}

int Student::getYearlyRank(){
	return yearly_rank;
}


    //		semester_rank
void Student::setSemesterRank(int sr){
	semester_rank = sr;
}

int Student::getSemesterRank(){
	return semester_rank;
}