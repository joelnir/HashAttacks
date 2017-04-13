#ifndef FILE_HANDLER
#define FILE_HANDLER

#include <set>
#include <vector>
#include <string>
#include <functional>

using namespace std;

class FileHandler{
public:
    int readList(string fileName, set<string>* hashList);
    int readList(string fileName, vector<string>* hashList);
private:
    int readToContainer(string fileName, function<void(string)> containerInsert);
};

#endif
