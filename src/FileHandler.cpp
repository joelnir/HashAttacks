#include "FileHandler.h"
#include <fstream>
#include <iostream>

int FileHandler::readHashList(string fileName, vector<string>* hashList){
    ifstream fileStream(fileName.c_str());

    if(!fileStream.is_open()){
        return -1;
    }

    string tmp;

    while(getline(fileStream, tmp)){
        hashList->push_back(tmp);
    }

    fileStream.close();
    return 0;
}
