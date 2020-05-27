#ifndef LECTURE_H_INCLUDED
#define LECTURE_H_INCLUDED
#include <vector>

using namespace std;

class Class;

class Lecture{
public:
    Class& OfClass;
    int LecID;

   Lecture();
   Lecture(Class);
   ~Lecture();


   void LectureErrorMsg();
   int ChooseLecture();


};


#endif
