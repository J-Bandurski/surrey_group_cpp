//File written by Jacek Bandurski
//14/12/2017

#include "paternalTree.h"

paternalTree::paternalTree() {}
paternalTree::~paternalTree() {}

string paternalTree::printPaternalTree(vector< vector<string> > delimCSV, string userChoice) 
{
	//string searchKey = "null";
    //cout << "entered printPaternalTree";
    
    for (int i = 0; i < delimCSV.size(); i++)
    {
       // cout << "entered first loop";	//debugging
        searchKey = delimCSV[i][name];     //assign value from delimCSV to comparison key
                
        if (searchKey == userChoice)    //if value assigned from delimCSV matches userinput
        {
            //cout << "entered if statement"; //debugging 
            return delimCSV[i][dad];
        }

        else if (userChoice == "na" || searchKey == "na")
        {
            return searchKey;
            cout << "[END]";
            //break;
        }

		else if (userChoice == "unknown" || searchKey == "unknown")
		{
			cout << "No such entry exists in this array <- ";
			return "na";
		}
		//else break;
    }
	searchKey = "unknown";
	return searchKey;
}