#include <string>
#include <iostream>
#include <hashlibpp.h>

using namespace std;

int main(int argc, char* argv[]){
    if(argc < 2){
        cout << "Error: No string given!" << endl;
        exit(-1);
    }

    string input = argv[1];

    hashwrapper *wrap = new md5wrapper();
    string m5Hash = wrap->getHashFromString(input);

    cout  << m5Hash << endl;
}
