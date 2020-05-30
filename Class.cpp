#include "Class.h"
#include "User.h"
#include <iostream>
#include <vector>

using namespace std;

Class :: Class(){
    cout << "New class with no information" << endl;
}

Class :: Class(Professor* p, string a, string b, Lecture* l){
    setProf(p);
    setTimeslots(a);
    setClassroom(b);
    setLectures(l);
    cout << "New Class by " << getProf() << endl;
    cout << "In Classroom: \"" << getClassroom() << "\"" << endl;
}

Professor* Class :: getProf(){
    return prof;
}

vector<string> Class :: getTimeslots(){
    return timeslots;
}

string Class :: getClassroom(){
    return classroom;
}

vector<Lecture*> Class :: getLectures(){
    return lectures;
}

void Class :: setProf(Professor* p){
    prof = p;
}

void Class :: setTimeslots(string s){
    timeslots.push_back(s);
}

void Class :: setClassroom(string s){
    classroom = s;
}

void Class :: setLectures(Lecture* l){
    lectures.push_back(l);
}



void Class :: AskForEditing(){
    cout << "Press '1' to edit Class name." << endl;
    cout << "Press '2' to edit timeslots." <<endl;
    cout << "Press '3' to delete Class. " << endl;
    cout << "Press '4' to go back. " << endl;
    int i;
    cin >> i;
    string s;
    switch(i){
        case 1:
            cout << "Enter new Class name: ";
            cin >> s;
            setName(s);
            break;
        case 2:
            timeslots.clear();
            cout << "Enter new time slot: ";
            cin >> s;
            setTimeslots(s);
            break;
        case 3:
            delete this;
            break;
        case 4:
            break;
        default:
            EditingErrorMsg();
    }

}

void Class :: EditingErrorMsg(){
    cout << "Something went wrong with the editing process!" << endl;
}