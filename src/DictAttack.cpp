#include "DictAttack.h"
#include <time.h>

int DictAttack::findHashes(set<string> &hashList, ostream& output){
    int hashC = hashList.size();

    int foundC = 0;
    int processedC = 0;
    int wordC = getWordC();

    //For timing and output
    clock_t lastPrint = clock();

    for(vector<vector<string> >::iterator iter = dictList.begin(); iter != dictList.end(); iter++){
        for (string& s : *iter) {
            vector<string> modifiedStrings;

            for(StringModifier* mod : modifierList){
                vector<string> newWords = mod->getWords(s);

                //Append new modified words
                modifiedStrings.insert(modifiedStrings.end(), newWords.begin(), newWords.end());
            }

            modifiedStrings.push_back(s);

            for(string testString : modifiedStrings){
                if(tryHash(testString, hashList, output)){
                    foundC++;
                }
            }

            if((((float)(clock() - lastPrint))/CLOCKS_PER_SEC) > PRINT_PERIOD){
                lastPrint = clock();

                output << "Processed: " << processedC << " / " << wordC << " Found: " << foundC << endl;
            }

            processedC++;
        }
    }

    output << "Found " << foundC << " of " << hashC << endl;
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

int DictAttack::getWordC(){
    int wordC = 0;

    for(vector<string> dict: dictList){
        wordC += dict.size();
    }

    return wordC;
}
