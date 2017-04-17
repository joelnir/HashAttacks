#ifndef SPECIAL_CHAR_MODIFIER
#define SPECIAL_CHAR_MODIFIER

#include <vector>
#include "StringModifier.h"

using namespace std;

class SpecialCharModifier: public StringModifier{
public:
    vector<string> getWords(string& original) const;
private:
};

#endif
