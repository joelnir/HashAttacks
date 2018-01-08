#ifndef DICT_ATTACK
#define DICT_ATTACK

#include <set>
#include <iostream>
#include <vector>

#include "FileHandler.h"
#include "Attack.h"
#include "StringModifier.h"

using namespace std;

class DictAttack : public Attack{
public:
    int findHashes(set<string>& hashList, ostream& output);
    int addDict(string fileName);
    void clearDicts();

    void addModifier(StringModifier* mod);
    void clearModifiers();
private:
    vector<StringModifier*> modifierList;
    vector<vector<string> > dictList;
    FileHandler fHandler;
    int getWordC();

    //Print info about attack every PRINT_PERIOD'th second
    double PRINT_PERIOD = 1;
};

#endif
