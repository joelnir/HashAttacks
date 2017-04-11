#include <iostream>
#include <string>
#include <stdlib.h>

#include <hashlibpp.h>
#include "FileHandler.h"

using namespace std;

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

    //List to place hashes in
    vector<string>* hashList = new vector<string>();
    int fileReading = fHandler.readHashList(inputFile, hashList);

    if(fileReading == -1){
        cout << "Error: failed reading file " << inputFile << endl;
        exit(-1);
    }

    cout << hashList << endl;
}
