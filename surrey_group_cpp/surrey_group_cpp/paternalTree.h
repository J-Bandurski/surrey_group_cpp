//File written by Jacek Bandurski
//14/12/2017

#ifndef paternalTree_h
#define paternalTree_h

#include "animalAttributes.h"
#include <iostream>
#include <vector>
#include <string>
using std::vector;
using std::string;
using std::cout;
using std::cin;

class paternalTree
{
private:
    string searchKey;
    vector<string> paternalTreeVector;

public:

    paternalTree();
    ~paternalTree();

    string printPaternalTree(vector< vector<string> > delimCSV, string userChoice);

};

#endif