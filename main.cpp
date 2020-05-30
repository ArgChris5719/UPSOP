#include <iostream>
#include <vector>
#include "User.h"
#include "User.cpp"



using namespace std;
vector<User> user_db;
int main()
{
    Student st1("avoritis", "avoritis@ceid.upatras.gr");
    Student st2("argiropou", "argiropou@ceid.upatras.gr", 5719);
    Student st3;

    //Student st2("ckaralis", "ckaralis@ceid.upatras.gr");

    Professor pf1("vergos", "h_vergos@yahoo.gr");
    Professor pf2;

    cout << "Number of Users: " << user_db.size() << endl;
    //user_db.clear();
    return 0;
}
