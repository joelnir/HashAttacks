#ifndef STRING_MODIFIER
#define STRING_MODIFIER

#include <vector>
#include <string>

using namespace std;

class StringModifier{
public:
    //Returns number of hashes found by attack
    virtual vector<string> getWords(string& original) const = 0;
};

#endif
