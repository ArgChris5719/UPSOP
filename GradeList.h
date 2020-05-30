#ifndef GRADELIST_H_INCLUDED
#define GRADELIST_H_INCLUDED
#include <vector>
#include <iostream>
#include <map>

using namespace std;

class Class;
class Professor;

typedef map<string, double> Map; //{AM : grade}

class GradeList{
private:
    Professor* graded_by;
    Map grades;
    Class* forClass;

public:

    GradeList();
    GradeList(Professor*, Class*);
    ~GradeList();

    
    //Get methods

    Professor* getGraded_by();
    Map getGrades();
    Class* getForClass();

    //Set methods
    
    void setGraded_by(Professor*);
    void setGrades(string, double );
    void setForClass(Class*);

    double ask_grade();
    bool check_grade(double);
    void valid_message();
    double invalid_message();
    int searchDB();
    bool isListFull();
    bool askForConfirmation();
    void list_not_full_msg();
    void save_changes();
    void deleteGradeList();    

};
#endif