#ifndef TEAM_H
#define TEAM_H

#include <cstdint>
#include <iostream>
#include "match.h"

using namespace std;

class Team {

    public:
        Team(const string sName);

        string GetName();
        Match GetLastMatch();
    private:
        string _sName;
};

#endif