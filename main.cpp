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
    bool found=false;
    int index;
    for(int i=0; i<user_db.size();i++){
        if (user_db[i].getUsername()==u_name){
            found=true;
            index=i;
            break;
        }
    }
    if (found){
        string p_word;
        cout << "Please enter your password:\n";
        cin >> p_word;
        while(p_word!=user_db[index].getPassword()){
            cout << "Wrong Password. Please try again.\n";
            cin >> p_word;
        }
        user_db[index].setLoggedIn(true);
        cout << "Logged In Successfully !!\n\n\n";
        return true;
    }else{
        cout << "Failed to log in...\n\n\n";
        return false;
    }
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
    Student st3;  // default student


    Professor pf1("vergos", "h_vergos@yahoo.gr","pa55c0d3");
    Professor pf2; // default professor

    cout << "Number of Users: " << user_db.size() << endl;

    cout << "First User: " <<user_db.begin()->getUsername() << "\n\n";
        cout << "Welcome to UPSOP!\n\nWhat would you like to do ?\n";
        cout << "1. Log In\n2. Register\n\n";
        cin >> sel;
        switch(sel){
        case 1:
            login();
            break;
        case 2:
            reg();
            break;
        default:
            cout << "Goodbye !\n";
            return 0;
        }

        while(sel>0 && sel<4){
            cout << "Welcome !\n\n";
            cout << "1. Create A Group.\n";
            cout << "2. Edit Public Info\n";
            cout << "3. Post\n";
            cout << "0. Exit\n";
            cin >> sel ;
        }
    return 0;
}
