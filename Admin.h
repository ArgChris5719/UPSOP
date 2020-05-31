#ifndef ADMIN_H_INCLUDED
#define ADMIN_H_INCLUDED
#include <vector>

using namespace std;


class Class;

class Admin{
private:
    vector<Class*> class_list;
public:
    Admin();
    ~Admin();

    vector<Class*> getClasses();
    void ChangeClass();
    void CreateLecture();

    void setClasses(Class*);

};


#endif
