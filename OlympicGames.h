#ifndef OLYMPICGAMES_H
#define OLYMPICGAMES_H

#include "People.h"
#include "Client.h"

class OlympicGames {

    People **peoples;
    int count;

    Client **clients;
    int peopleCount;

    enum {RUSSIA, CANADA, FINLAND, FRANCE, JAPAN};
    int results[5];

    string readFromFile(string filename);

    const string sports[4] = {
            "Skeleton", 
            "Biatlon", 
            "Skating", 
            "IceSkating" 
    };

public:
    void notify();

    void subscribe(Client *client);
    void unsubscribe(int index);

    void addPeople(People &p);

    OlympicGames();

    int getCount() const;
    string sort(People **peoples, int len, string &sport);
    int filterSportParam(People *current, string sport);

    void addCountryResult(string &country);
    string getWinner();

    void getResults();
    void writeResult(string &line);

    virtual ~OlympicGames();

};


#endif //OLYMPICGAMES_H
