#ifndef SEARCH_H_INCLUDED
#define SEARCH_H_INCLUDED
#include <vector>
#include <iostream>

using namespace std;


class Search{    
public:    
    Search();
    ~Search();

    bool checkIfNameValid();
    string NameErrorMsg();
    int IDErrorMsg();
    void StudentErrorMsg();

};

#endif