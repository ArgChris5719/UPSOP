#include "Lecture.h"
#include "Class.h"

#include <vector>
#include <iostream>

using namespace std;

Lecture :: Lecture(){
    cout << "New Lecture with no information" << endl;
}

Lecture :: Lecture(Class* c){
    setOfClass(c);
    cout << "New lecture for class: " << getOfClass()->getName() << endl;
}

Class* Lecture ::  getOfClass(){
    return OfClass;
}

int Lecture :: getLecID(){
    return LecID;
}

void Lecture :: setOfClass(Class* c){
    OfClass = c;
}

void Lecture :: setLecID(int i){
    LecID = i;
}
