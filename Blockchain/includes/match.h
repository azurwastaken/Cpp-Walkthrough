#ifndef MATCH_H
#define MATCH_H

#include <cstdint>
#include <iostream>
#include <string>
#include <sstream>
#include <iostream>
#include "team.h"

using namespace std;

class Match {

    public:
        Match(const string sTeamA, const string sTeamB, string sDate);

        string GetResult(void);
    private:
        string _sTeamA;
        string _sTeamB;
        uint8_t _result[2];
        string _sDate;
};

#endif