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

double GradeList :: ask_grade(){
    double g;
    cout << "Insert Value: " ;
    cin >> g;
    if (check_grade(g)) {
        valid_message();
        return g;
    }
    else{
        g = invalid_message();
    }
    return g;
}

bool GradeList :: check_grade(double d){
    if (d >= 0.0 && d <= 10.0){
        return true;
    }
    else return false;
}

void GradeList :: valid_message(){
    cout << "The grade is valid!" << endl;
}

double GradeList :: invalid_message(){
    double d;
    cout << "The grade is NOT valid! Try again..." << endl;
    while(1){
        cout << "Insert Value: " ;
        cin >> d;
        if ( check_grade(d)){
            return d;
            break;
        }
        else {
            cout << "Try again... " << endl;
            continue;
        }
    }
}

int GradeList :: searchDB(){
    string AM;
    cout << "Enter the AM of the student you wish to find: ";
    cin >> AM;
    Map::iterator it;
    it = getGrades().find(AM);
    if (it == getGrades().end()){
        cout << "Student not found in list" << endl;
    }
    else{
        cout << "The student with AM = " << it->first << "was graded: " << it->second << endl;
    }
}

bool GradeList :: askForConfirmation(){
    int i;
    cout << "'1' for Confirmation" << endl;
    cout << "'2' to go back" << endl;
    cin >> i;
    if (i == 1){
        return true;
    }
    else return false;
}
