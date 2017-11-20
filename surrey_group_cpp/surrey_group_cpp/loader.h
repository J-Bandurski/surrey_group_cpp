#ifndef loader_h    //preprocessor command making
#define loader_h    //sure the class is loaded and defined

#include <iostream> //for testing purposes
#include <string>   //to store the CSV files
#include <array>    //C++11 standard arrays

/*loader class responsible for accessing and
storing a csv file, and handling load errors*/
class loader
{
private:
    //??TBD

public:

    loader();   //default constructor, can be overloaded
  //may be used at some point >  loader(std::string userSelect); //overloaded constructor
    ~loader(); //default destructor, can be overloaded

    void printcsv(std::string csvFile); // console output, used for testing

};

#endif //closing statement for "ifndef" || !loader_h
