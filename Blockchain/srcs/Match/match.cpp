#include "match.h"

Match::Match(Team teamA, Team teamB, string date) : _teamA(teamA), _teamB(teamB), _sData(sDataIn) {
    _result[0] = 0;
    _result[1] = 0;
}

string Match::GetMatch(void){
    return _sTeamA.GetName() << string(" vs ") << _sTeamB.GetName();
}

string Match::GetResult(void){
    return to_string(_result[0]) << " - " << to_string(_result[1]);
}

// void Match::PrintMatch(){
//     cout << GetMatch() << endl;
//     cout << GetResult() << endl;
// }