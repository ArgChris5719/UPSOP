#ifndef CLASS_H_INCLUDED
#define CLASS_H_INCLUDED
#include <vector>
#include <iostream> 

using namespace std;

class Professor;
class Lecture;

class Class{
private:
    string name;
    Professor* prof;
    vector<string> timeslots;
    string classroom;
    vector<Lecture*> lectures;

public:
    Class();
    Class(string, Professor*, string, string, Lecture*);
    ~Class();

    //Get methods

    string getName();
    Professor* getProf();
    vector<string> getTimeslots();
    string getClassroom();
    vector<Lecture*> getLectures();

    //Set Methods
    
    void setName(string s);
    void setProf(Professor*);
    void setTimeslots(string);
    void setClassroom(string);
    void setLectures(Lecture*);

    string AskForEditing();
    bool CheckClass();
    bool CheckECTS();
    string EditingErrorMsg();
};

#endif