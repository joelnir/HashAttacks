#ifndef ATTACK
#define ATTACK

#include <iostream>
#include <set>
#include <hashlibpp.h>

using namespace std;

class Attack{
public:
    //Returns number of hashes found by attack
    virtual int findHashes(set<string>& hashList, ostream& output) = 0;
    bool tryHash(string& original, set<string>& hashList, ostream& output);
private:
    md5wrapper wrapper;
};

#endif
