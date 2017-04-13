#include "FileHandler.h"
#include <fstream>
#include <iostream>

int FileHandler::readList(string fileName, set<string>* hashList){
    auto insertFunc = [hashList](string data){hashList->insert(data);};

    return readToContainer(fileName, insertFunc);
}

int FileHandler::readList(string fileName, vector<string>* hashList){
    auto insertFunc = [hashList](string data){hashList->push_back(data);};

    return readToContainer(fileName, insertFunc);
}

int FileHandler::readToContainer(string fileName, function<void(string)> containerInsert){
    ifstream fileStream(fileName.c_str());

    if(!fileStream.is_open()){
        return -1;
    }

    string tmp;

    while(getline(fileStream, tmp)){
        containerInsert(tmp);
    }

    fileStream.close();
    return 0;
}
