#include "Attack.h"

bool Attack::tryHash(string& original, set<string>& hashList, ostream& output){
    #ifdef DEBUG
        output << "Testing string: " << original << endl;
    #endif

    string testHash = wrapper.getHashFromString(original);

    auto res = hashList.find(testHash);

    if(res != hashList.end()){
        output << testHash << " : " << original << endl;
        hashList.erase(res);
        return true;
    }

    return false;
}
