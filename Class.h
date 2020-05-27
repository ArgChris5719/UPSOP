#ifndef CLASS_H_INCLUDED
#define CLASS_H_INCLUDED
#include <vector>

using namespace std;

class Professor;
class Lecture;

class Class{
public:
    Professor& prof;
    string timeslots[];
    string classroom;
    vector<Lecture*> lectures;

    Class();
    Class(Professor, string, string, vector<Lecture*>);
    ~Class();

    string AskForEditing();
    bool CheckClass();
    bool CheckECTS();
    string EditingErrorMsg();
};

#endif