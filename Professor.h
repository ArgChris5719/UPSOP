#ifndef PROFESSOR_H_INCLUDED
#define PROFESSOR_H_INCLUDED
#include <vector>

using namespace std;


class Room;
class Class;
class GradeList;
class User;

class Professor: public User{

private:
    vector<Room*> in_chargeOf;
    vector<Class*> class_list;
    vector<GradeList*> grades;

public:
    Professor();
    Professor(vector<Room*>, vector<Class*>, vector<GradeList*>);
    ~Professor();

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