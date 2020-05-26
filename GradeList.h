#ifndef GRADELIST_H_INCLUDED
#define GRADELIST_H_INCLUDED
#include<vector>

using namesace std;

class Class;
class Professor;

class GradeList{

public:
    Professor& graded_by;
    map<string, pair<string, double>> grades;
    Class& forClass;

    double ask_grade();
    bool check_grade();
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