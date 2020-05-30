#ifndef CLASS_H_INCLUDED
#define CLASS_H_INCLUDED
#include <vector>
#include <iostream> 

using namespace std;

class Professor;
class Lecture;

class Class{
private:
    Professor* prof;
    vector<string> timeslots;
    string classroom;
    vector<Lecture*> lectures;

public:
    Class();
    Class(Professor*, string, string, Lecture*);
    ~Class();

    //Get methods

    Professor* getProf();
    vector<string> getTimeslots();
    string getClassroom();
    vector<Lecture*> getLectures();

    //Set Methods
    
    void setProf(Professor*);
    void setTimeslots(string);
    void setClassroom(string);
    void setLectures(Lecture*);

    void AskForEditing();
    bool CheckClass();
    bool CheckECTS();
    void EditingErrorMsg();
};

#endif