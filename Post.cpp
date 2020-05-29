#include "Post.h"
#include "User.h"
#include "Conversation.h"

#include <vector>
#include <iostream>

using namespace std;

Post :: Post(){
    cout << "New Post with no information" << endl;
}

Post :: Post(int i, User* a, int u, Conversation* c, string s){
    setPostID(i);
    setAuthor(a);
    setUpvotes(u);
    setInConv(c);
    setKeywords(s);
    cout << "New Post with ID = " << getPostID() << endl;
    cout << "By: \"" << getAuthor()->getUsername() << "\"" << endl;
    cout << "Inside : " << getInConv()->getConvID();
}

int Post :: getPostID(){
    return PostID;
}

User* Post :: getAuthor(){
    return author;
}

int Post :: getUpvotes(){
    return upvotes;
}

string Post :: getText(){
    return text;
}

Conversation* Post :: getInConv(){
    return inConv;
}

vector<string> Post :: getKeywords(){
    return keywords;
}

Post* Post:: getReply_to(){
    return reply_to;
}

void Post :: setPostID(int i){
    PostID = i;
}

void Post :: setAuthor(User* u){
    author = u;
}

void Post :: setUpvotes(int i){
    upvotes = i;
}

void Post :: setText(string t){
    text = t;
}

void Post :: setInConv(Conversation* c){
    inConv = c;
}

void Post :: setKeywords(string s){
    keywords.push_back(s);
}

void  Post :: setReply_to(Post* p){
    reply_to = p;
}