#include <iostream>
#include <string>
#include <stdlib.h>
#include<set>
#include<vector>

#include <hashlibpp.h>
#include "FileHandler.h"
#include "DictAttack.h"

using namespace std;

vector<string> DICTIONARIES = {};

int main(int argc, char* argv[]){
    /*string s = "string to hash1";
    hashwrapper *wrap = new md5wrapper();
    string m5Hash = wrap->getHashFromString(s);
    */

    if(argc < 2){
        cout << "Error: No file given!" << endl;
        exit(-1);
    }

    string inputFile = argv[1];

    FileHandler fHandler;

    //Read hashes
    set<string>* hashList = new set<string>();
    int fileReading = fHandler.readList(inputFile, hashList);

    if(fileReading == -1){
        cout << "Error: failed reading file " << inputFile << endl;
        exit(-1);
    }

    // ---- Attacks ----
    DictAttack dAtt;
    dAtt.findHashes(*hashList, cout);

    cout << *hashList->begin() << endl;
}
