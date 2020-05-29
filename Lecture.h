#ifndef LECTURE_H_INCLUDED
#define LECTURE_H_INCLUDED
#include <vector>

using namespace std;

class Class;

class Lecture{
private:
    Class* OfClass;
    int LecID;

public:
   Lecture();
   Lecture(Class*);
   ~Lecture();

    //Get methods

    Class* getOfClass();
    int getLecID();

    //Set methods

    void setOfClass(Class*);
    void setLecID(int);

   void LectureErrorMsg();
   int ChooseLecture();


};


#endif
