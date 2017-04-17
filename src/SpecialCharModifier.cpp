#include "SpecialCharModifier.h"

vector<char> CHARS = {'!', '?', '-', '_', '+', '.'};

vector<string> SpecialCharModifier::getWords(string& original) const{
    vector<string> newWords;

    for(char c : CHARS){
        newWords.push_back(original + c);
        newWords.push_back(c + original);
    }

    return newWords;
}
