#ifndef PROFESSOR_H_INCLUDED
#define PROFESSOR_H_INCLUDED
#include<vector>

using namesace std;


class Room;
class Class;
class GradeList;

class Professor: public User{

private:
    vector<Room*> in_chargeOf;
    vector<Class*> class_list;
    vector<GradeList*> grades;

public:
    void confirm_as_prof();
    GradeList& grade();
    void show_classes();
    void choose_class();

};

#endif 