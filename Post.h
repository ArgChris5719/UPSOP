#ifndef POST_H_INCLUDED
#define POST_H_INCLUDED

#include <vector>
#include <iostream>


using namespace std;

class User;
class Conversation;

class Post{
private:
   int PostID;
   User* author;
   int upvotes;
   string text;
   Conversation* inConv;
   vector<string> keywords;
   Post* reply_to;

public:
    Post();
    Post(int, User*, int, Conversation*, string);
    ~Post();

    //Get methods

    int getPostID();
    User* getAuthor();
    int getUpvotes();
    string getText();
    Conversation* getInConv();
    vector<string> getKeywords();
    Post* getReply_to();

    //Set methods 
    
    void setPostID(int);
    void setAuthor(User*);
    void setUpvotes(int);
    void setText(string);
    void setInConv(Conversation*);
    void setKeywords(string);
    void setReply_to(Post*);

    void request_text();
    void check_text_size(string);
    void valid_text_size();
    void invalid_text_size();
    void ask_keywords();
};



#endif