#include <iostream>         // # specifies preprocessor command, these are completed first and foremost 
#include "parser.h"
#include "animalAttributes.h"
//using namespace std;      // using namespace standard, using is matter of personal preference

int main()                  // first executed function
{
    vector< vector<string> > testArray; //Creates a temporary array to house delimCSV from parser.
    testArray.empty();

    parser newparse;
    testArray = newparse.splitByDelimiter("Dogs.csv");
   
    std::cout << std::endl << std::endl << testArray[0][Dad]; 



    std::cin.get();         //don't close the window until user
    std::cin.get();         //input registered twice (enter)

    system("PAUSE"); // for test purposes only, remove before sub!

    return 0;
}