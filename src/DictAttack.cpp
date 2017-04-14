#include "DictAttack.h"

int DictAttack::findHashes(set<string> &hashList, ostream& output){
    int hashC = hashList.size();

    int foundC = 0;
    for(vector<vector<string> >::iterator iter = dictList.begin(); iter != dictList.end(); iter++){
        for (string& s : *iter) {
            tryHash(s, hashList, output);

            vector<string> modifiedStrings;

            for(StringModifier* mod : modifierList){
                modifiedStrings = mod->getWords(s);
            }

            modifiedStrings.push_back(s);

            for(string testString : modifiedStrings){
                //cout << tryHash(testString, hashList, output) << endl;
                if(tryHash(testString, hashList, output)){
                    output << "FOUND!" << endl;
                    foundC++;
                }
            }
        }
    }

    output << "Found " << foundC << " of " << hashC << endl;;
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
