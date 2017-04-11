#include <iostream>
#include <string>
#include <hashlibpp.h>
#include "test1.h"

using namespace std;

int main(){
    //test_funct();

    string s = "string to hash1";
    hashwrapper *wrap = new md5wrapper();
    string m5Hash = wrap->getHashFromString(s);

    cout << "Hash: " << m5Hash << endl;

    delete wrap;
}
