#include <iostream>
#include <string>
#include "hashing.hpp"
#include "hashing.cpp"

using namespace std;


int main(int argc, char *argv[]) {
    cout << hash_string(argv[1],31) << endl;
}
