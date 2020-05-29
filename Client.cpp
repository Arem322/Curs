#include "Client.h"

void Client::update(string winner) {
    if (winner == this->choice) {
        cout << "Congratulations! The country you supproted (" << this->choice << ") won!"<< endl;
    } else {
        cout << "The country you supported (" << this->choice << ") lost! Country that won is " << winner << "." << endl;
    }
}

const string &Client::getChoice() const {
    return choice;
}

void Client::setChoice(const string &choice) {
    Client::choice = choice;
}

Client::Client() {}

Client::Client(const string &choice) : choice(choice) {}
