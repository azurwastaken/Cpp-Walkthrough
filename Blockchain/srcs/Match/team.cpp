#include "team.h"

Team::Team(const string sName) : _sName(sName){
}

string Team::GetName(){
    return(_sName);
}