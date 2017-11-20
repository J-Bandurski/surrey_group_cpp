#include <iostream>         // # specifies preprocessor command, these are completed first and foremost 
#include "parser.h"
//using namespace std;      // using namespace standard, using is matter of personal preference

int main()                  // first executed function
{
    parser newparse;
    newparse.splitByDelimiter("Dogs.csv");
   

    std::cin.get();         //don't close the window until user
    std::cin.get();         //input registered twice (enter)

    system("PAUSE"); // for test purposes only, remove before sub!

    return 0;
}