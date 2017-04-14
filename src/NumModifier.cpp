#include "NumModifier.h"

vector<string> NumModifer::getWords(string& original) const{
    vector<string> newWords;

    for (unsigned i = 0; i <= limit; i++) {
        newWords.push_back(original + to_string(i));
    }

    return newWords;
}

void NumModifer::setLimit(int lim){
    limit = lim;
}
