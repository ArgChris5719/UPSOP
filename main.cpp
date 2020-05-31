#include <iostream>
#include <algorithm>
#include <sstream>
#include <vector>
#include <string>
#include "User.h"
#include "Timetable.h"
#include "User.cpp"

string u_name;

vector<User> user_db;

using namespace std;


bool login(){
    cout << "Please enter your username:\n";
    cin >> u_name;
    for(int i=0; i<user_db.size();i++){
        if (user_db[i].getUsername()==u_name){
            cout << "Logged In Successfully !!\n\n\n";
            return true;
        }
    }
    cout << "Failed to log in...\n\n\n";
    return false;

}

void reg(){
    string u_name,u_mail,u_pass="a",r_pass="b",alm;
    int type=0,am;
    cout << "Please enter a username:\n";
    cin >> u_name;
    cout << "Please enter your university email:\n";
    cin >> u_mail;
    cout << "Please enter your AM:\n";
    cin >> alm;
    istringstream ss(alm);
    ss >> am;
    //password check
    while(u_pass!=r_pass){
        cout << "Please enter a password:\n";
        cin >> u_pass;
        cout << "Re-enter the password:\n";
        cin >> r_pass;
        if(u_pass!=r_pass){
            cout << "Passwords don't match. Please try again.\n";
        }
    }
    //type of user
    while(type!=1 && type!=2){
        cout << "Are you:\n1.A Student\n2.A Professor\n";
        cin >> type;
        if(type==1){
            //Student st(u_name,u_mail);
            user_db.push_back(Student(u_name,u_mail,am,u_pass));
        }else if(type==2){
            user_db.push_back(Professor(u_name,u_mail,u_pass));
        }else{
            cout << "Invalid choice. Please try again.\n\n";
        }
    }
} //end reg



int main()
{
    int sel=1;
    Student st1("avoritis", "avoritis@ceid.upatras.gr",1234,"kodikos");
    Student st2("argiropou", "argiropou@ceid.upatras.gr",5719,"code");
    Student st3;

    //Student st2("ckaralis", "ckaralis@ceid.upatras.gr");

    Professor pf1("vergos", "h_vergos@yahoo.gr","pa55c0d3");
    Professor pf2;

    cout << "Number of Users: " << user_db.size() << endl;
    //user_db.clear();
    cout << "First User: " <<user_db.begin()->getUsername() << "\n\n";
    while(sel>0 && sel<3){
        cout << "Welcome to UPSOP!\n\nWhat would you like to do ?\n";
        cout << "1. Log In\n2. Register\n\n";
        cin >> sel;
        if(sel==1){
            login();
        }else if(sel==2){
            reg();
        }
    }
    cout << "Goodbye !\n";

    return 0;
}
