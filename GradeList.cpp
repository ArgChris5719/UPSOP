#include "GradeList.h"
#include "User.h"
#include "Class.h" 

#include <vector>
#include <iostream>
#include <map>

using namespace std;

GradeList :: GradeList(){
    cout << "New GradeList with no information" << endl;
}

GradeList :: GradeList(Professor* p, Class* c){
    setGraded_by(p);
    setForClass(c);

    cout << "New GradeList by : " << getGraded_by()->getUsername() << endl;
    cout << "For Class: " << getForClass()->getName() << endl;
}

Professor* GradeList :: getGraded_by(){
    return graded_by;
}

Map GradeList :: getGrades(){
    return grades;
}

Class* GradeList :: getForClass(){
    return forClass;
}

void GradeList :: setGraded_by(Professor* p){
    graded_by = p;
}

void GradeList :: setGrades(string s, double d){
    grades.insert({s, d});
}

void GradeList :: setForClass(Class* c){
    forClass = c;
}

