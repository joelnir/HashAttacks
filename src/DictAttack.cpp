#include "DictAttack.h"

int DictAttack::findHashes(set<string> &hashList, ostream& output){
    for(vector<vector<string> >::iterator iter = dictList.begin(); iter != dictList.end(); iter++){
        for (string& s : *iter) {
            tryHash(s, hashList, output);

            /*
            for(StringModifier* mod : modifierList){
                vector<string> modifiedStrings;
            }
            */
        }
    }
}

int DictAttack::addDict(string fileName){
    int findHashes(set<string> hashList, ostream output);
    dictList.push_back(vector<string>());

    vector<string>* insertVector = &(*dictList.rbegin());

    return fHandler.readList(fileName, insertVector);
}

void DictAttack::clearDicts(){
    dictList.clear();
}

void DictAttack::addModifier(StringModifier* mod){
    modifierList.push_back(mod);
}
void DictAttack::clearModifiers(){
    modifierList.clear();
}
