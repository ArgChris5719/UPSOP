#ifndef USER_H_INCLUDED
#define USER_H_INCLUDED
#include <vector>
#include <iostream>

using namespace std;

class Alert;
class Timetable;
class Message;
class ProfilePic;
class Room;
class Conversation;


class User{

private:
	vector<Alert*> AlertsList;
	Timetable& Custom_TT;
	vector<Message*> msg_history;
	int UserID;
	string username;
	string email;
	vector<ProfilePic*> ProfPicList;
public:

	User();
	User(string, string);
	~User();

	//Get methods

	vector<Alert*> getAlertsList();
	Timetable& getCustom_TT();
	vector<Message*> getMsg_history();
	int getUserID();
	string getUsername();
	string getEmail();
	vector<ProfilePic*> getProfilePicList();

	//Set methods
	
	void setAlertsList(Alert);
	void setCustom_TT(Timetable);
	void setMsg_history(Message);
	void setUserID(int);
	void setUsername(string);
	void setEmail(string);
	void setProfilePicList(ProfilePic);

	void change_prof_pic();
	string askImgSource();
	void createProfilePic(string);
	void post(Room*);
	Conversation* search_conv(int);

};

#endif 