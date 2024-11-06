#pragma once
#include <string>

using namespace std;

class Client{
private:
    string username;
    string name;

public:
    Client(string username, string name);

    string getUsername();
    string getName();
};