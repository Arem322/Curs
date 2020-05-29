#ifndef CLIENT_H
#define CLIENT_H

#include <iostream>
#include <string>

using namespace std;

class Client {

    string choice;
public:
    Client(const string &choice);

public:
    Client();

public:
    const string &getChoice() const;

    void setChoice(const string &choice);

    void update (string winner);

};


#endif //CLIENT_H
