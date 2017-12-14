#include <iostream>         // # specifies preprocessor command, these are completed first and foremost 
#include "parser.h"
#include "animalAttributes.h"
#include "paternalTree.h"

//using namespace std;      // using namespace standard, using is matter of personal preference
using std::vector;
using std::string;
using std::cin;
using std::cout;

int main()                  // first executed function
{
    parser newparse;    //creates a new parser to handle the tokenisation of the csv files.
    
    vector< vector<string> > testArray; //creates a temporary array to house delimCSV from parser.
    testArray.empty();

    string newstringtest = "null"; //creates a string to house user input for choosing files
    string searchchoice;
    paternalTree newtree;

    //UI
    std::cout << "Please choose the file you wish to display;\nPlease avoid adding the file extension\ne.g.''dogs'' instead of ''dogs.csv''  \n";
    std::cin >> (newstringtest);
    
   
    testArray = newparse.splitByDelimiter(newstringtest+".csv");

    cout << "\nPlease select the entity whose paternal tree you would like to display;\n";
    cin >> searchchoice;
    
    while (searchchoice != "na")
    {
        cout << searchchoice << " <- ";
        searchchoice = newtree.printPaternalTree(testArray, searchchoice);
    }
    
   // cout << newtree.printPaternalTree(testArray, searchchoice);

    //std::cout << std::endl << std::endl << testArray[4][6]; 
    
    cin.get();         //don't close the window until user
    cin.get();         //input registered twice (enter)

    system("PAUSE"); // for test purposes only, remove before sub!

    return 0;
}