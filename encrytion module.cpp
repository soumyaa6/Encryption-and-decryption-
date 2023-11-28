#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void encryptFile(const string& fileName, int key) {
    ifstream inputFile(fileName, ios::in);

    if (!inputFile.is_open()) {
        cerr << "Error opening file: " << fileName << endl;
        return;
    }

    string content;
    char ch;
    while (inputFile.get(ch)) {
        content += ch;
    }
