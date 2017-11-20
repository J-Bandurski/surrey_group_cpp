//File written by Jacek Bandurski
//20/11/2017

#ifndef loader_h    //preprocessor command making
#define loader_h    //sure the class is loaded and defined

#include <iostream> //for testing purposes
#include <string>   //to store the CSV files
#include <fstream>  //library for access and manipulation of external libraries

/*loader class responsible for accessing and
storing a csv file, and handling load errors*/
class loader
{
private:
    std::string inputFile;

public:

    loader();   //default constructor, can be overloaded
   //testing > loader(std::string userSelect); //overloaded constructor
    ~loader(); //default destructor, can be overloaded

    void printcsv(std::string csvFile); // console output, used for testing

};

#endif //closing statement for "ifndef" || !loader_h
