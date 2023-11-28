#include "encrypt/encryptModule.h"
#include "decrypt/decryptModule.h"
#include <iostream>
#include <string>
#include <cstdlib> // For system("clear")

using namespace std;

// Function to hash the password using a simple hash function
string hashPassword(const string& password) {
    hash<string> hasher;
    size_t hashValue = hasher(password);

    // Convert the hash value to a string
    stringstream ss;
    ss << hex << hashValue;
    return ss.str();
}
