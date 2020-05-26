#ifndef ADMIN_H_INCLUDED
#define ADMIN_H_INCLUDED
#include<vector>

using namesace std;


class Class;

class Admin{
public:
    vector<Class*> Classes();
    void ChangeClass();
    void CreateLecture();

};