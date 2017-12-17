//File written by Jacek Bandurski
//14/12/2017

#include "paternalTree.h"

paternalTree::paternalTree() {}
paternalTree::~paternalTree() {}

string paternalTree::printPaternalTree(vector< vector<string> > delimCSV, string userChoice) 
{
	
    int i = 0;
    
    //string searchKey = "null";
    //cout << "entered printPaternalTree";
    
    for (int i = 0; i < delimCSV.size(); i++)
    {
       // cout << "entered first loop";
        searchKey = delimCSV[i][1];     //assign value from delimCSV to comparison key
        //cout << searchKey;
        
        if (searchKey == userChoice)    //if value assigned from delimCSV matches userinput
        {
            //cout << "entered if statement"; //debugging 
            //paternalTreeVector.push_back(searchKey);    //add name to paternal tree vector
			//if (searchKey == "na") { cout << "[END]"; }
            return delimCSV[i][dad];
        }
        else if (userChoice == "na" || searchKey == "na")
        {
            return searchKey;
            cout << "[END]";
            //break;
        }
    }

    
}