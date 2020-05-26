#ifndef USER_H_INCLUDED
#define USER_H_INCLUDED
#include<vector>

using namesace std;

class Alert;
class Timetable;
class Message;
class ProfilePic;
class Room;

class User{

private:
	vector<Alert*> AlertsList;
	Timetable& Custom_TT;
	vector<Message*> msg_history;

public:
	int UserID;
	string username;
	string email;
	vector<ProfilePic*> ProfPicList;

	User();
	User(string, string);
	~User();

	void change_prof_pic();
	string askImgSource();
	void createProfilePic(string);
	void post(Room*);
	Conversation* search_conv(int);

};

#endif 