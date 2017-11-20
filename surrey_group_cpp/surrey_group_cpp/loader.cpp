#include "loader.h"
#include <fstream>
using std::cout; //specifies which cout and cin we want
using std::cin;  //to use, avoids "using namespace std" 
using std::ifstream;

loader::loader()    //default constructor, basic error handling
{
    cout << "No file has been loaded\nYou may have mistyped the name, or the file may not be located in the working directory";
}

loader::~loader()   //default destructor
{

}

//allows the user to quickly check the contents of a CSV file
void loader::printcsv(std::string csvFile)
{
    ifstream infile;
    
    infile.open(csvFile);

    if (infile.is_open())
    {
        while (infile.good()) 
        {
            cout << (char)infile.get();
        }

        infile.close();
    }

    else
    {
        cout << "\nError opening file"; //basic error handling
    }
}