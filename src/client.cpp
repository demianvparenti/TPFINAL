#include "../include/client.hpp"

using namespace std;

Client::Client(string username, string name)
    : username(username), name(name) {}

string Client::getUsername(){
    return username;
}

string Client::getName(){
    return name;
}