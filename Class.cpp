#include "Class.h"

#include <iostream>
#include <vector>

using namespace std;

Class :: Class(){
    cout << "New class with no information" << endl;
}

Class :: Class(Professor* p, string a, string b, Lecture* l){

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