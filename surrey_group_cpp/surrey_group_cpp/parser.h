//File written by Jacek Bandurski
//20/11/2017

#ifndef parser_h
#define parser_h

#include "loader.h" //base class "loader" 
#include <vector>   //vector class to be used as dynamic arrays
#include <sstream>  //library for string operation, contains getline() which we will use to operate delimiters 

using std::vector;  //makes sure vector and string use the STD namespace
using std::string;

class parser : public loader
{
private:
   vector< vector<string> > delimCSV; //2d string vector containing split up CSV files
   vector<string> lineArray;
   string line, token;

public:

    parser();       //default constructor
    ~parser();      //default destructor

    vector< vector<string> > splitByDelimiter(string inputFile);                //splits CSV into vector array
    // void searchParsed(vector< vector<string> > tokenArray, string userChoice);  //allows for search through tokenised array
    // vector< vector<string> > getVector(vector< vector<string> > delimCSV);  //returns the vector array containing delimited CSV file

};

#endif // !parser_h