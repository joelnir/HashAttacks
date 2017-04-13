#ifndef ATTACK
#define ATTACK

#include <iostream>
#include <set>

using namespace std;

class Attack{
public:
    //Returns number of hashes found by attack
    virtual int findHashes(set<string>& hashList, ostream& output) = 0;
};

#endif
