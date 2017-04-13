#ifndef DICT_ATTACK
#define DICT_ATTACK

#include <set>
#include <iostream>
#include <vector>

#include "FileHandler.h"
#include "Attack.h"

using namespace std;

class DictAttack : public Attack{
public:
    int findHashes(set<string>& hashList, ostream& output);
    int addDict(string fileName);
private:
    void clearDicts();

    vector<vector<string> > dictList;
    FileHandler fHandler;
};

#endif
