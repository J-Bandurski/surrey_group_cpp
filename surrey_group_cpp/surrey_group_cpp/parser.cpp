//File written by Jacek Bandurski
//20/11/2017

#include "parser.h"

using std::cout;    //specifies which cout and cin we want
using std::cin;     //to use, avoids "using namespace std" 
using std::ifstream;

parser::parser()
{
    //cout << "No file has been loaded\n";
}

parser::~parser()
{

}

vector< vector<string> > parser::splitByDelimiter(string inputFile)
{
    ifstream inputCSV(inputFile);
    
    while (getline(inputCSV, line))
    {
        lineArray.clear();
        std::stringstream lineDelim(line);
        while (getline(lineDelim, token, ','))
        {
            lineArray.push_back(token);
        }
        delimCSV.push_back(lineArray);
    }
    //PRINTING HERE FOR TESTING, TO BE MOVED INTO GETVECTOR//
    for (size_t i = 0; i<delimCSV.size(); ++i)
    {
        for (size_t j = 0; j<delimCSV[i].size(); ++j)
        {
            cout << delimCSV[i][j] << "|"; // (separate fields by |)
        }
        cout << "\n";
    }

    return delimCSV;
}

//vector< vector<string> > parser::getVector(vector< vector<string> >)
//{
    
//}