#ifndef GRADELIST_H_INCLUDED
#define GRADELIST_H_INCLUDED
#include <vector>

using namespace std;

class Class;
class Professor;

class GradeList{
private:
    Professor& graded_by;
    map<string, pair<string, double>> grades;
    Class& forClass;

public:

    GradeList();
    GradeList(Professor, Class);
    ~GradeList();

    //Get methods

    Professor& getGraded_by();
    map<string, pair<string, double>> getGrades();
    Class& getforClass();

    //Set methods
    
    void setGraded_by(Professor);
    void setGrades( map<string, pair<string, double>>);
    void setfooClass(Class);

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