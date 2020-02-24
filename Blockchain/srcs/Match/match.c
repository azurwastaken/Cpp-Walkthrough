#include "match.h"

Match::Match(const string teamA, const string teamB, string date) : _teamA(teamA), _teamB(teamB), _sData(sDataIn) {
    _result = [0,0];
}