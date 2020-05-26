#ifndef CLASS_H_INCLUDED
#define CLASS_H_INCLUDED
#include<vector>

using namesace std;

class Professor;
class Lecture;

class Class{
public:
    Professor& prof;
    string timeslots[];
    string classroom;
    vector<Lecture*> lectures;

    string AskForEditing();
    bool CheckClass();
    bool CheckECTS();
    string EditingErrorMsg();
};

#endif