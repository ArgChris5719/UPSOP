#ifndef TIMETABLE_H_INCLUDED
#define TIMETABLE_H_INCLUDED
#include <vector>
#include <iostream>


using namespace std;

class Class;
class User;

class Timetable{
private:
    vector<Class*> classes;
    string name;
    User* tt_owner;
public: 
    Timetable();
    Timetable(Class*, string, User*);
    ~Timetable();

    //Get methods

    vector<Class*> getClasses();
    string getName();
    User* getTT_owner();

    //Set methods

    void setClasses(Class*);
    void setName(string);
    void setTT_owner(User*);

    void showTimetable();
    bool TimetablePreview(); //Asks user if it should proceed
    void AddToPersonalisedTimetable();
    void VieewDeadline();



};

#endif