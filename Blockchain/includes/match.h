#ifndef MATCH_H
#define MATCH_H

#include <cstdint>
#include <iostream>

#include "team.h"

using namespace std;

class Match {

    public:
        Match(Team sTeamA, Team sTeamB, string sDate);

        string GetResult();
        string GetMatch();
        void PrintMatch();

    private:
        string _sTeamA;
        string _sTeamB;
        uint8_t _result[2];
        string _sDate;
};

#endif