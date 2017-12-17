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
	/*Everything in main could have been done in alternative classes,
	  but was done here to save time and effort because I'm lazy -J*/

	parser dogParser;						//parsing into class instances
	parser catParser;
	parser horseParser;

	vector< vector<string> > dogsArray;		//dogs storage
	dogsArray.empty();						//initialising empty vectors
	vector< vector<string> > catsArray;		//cats storage
	catsArray.empty();
	vector< vector<string> > horsesArray;	//horses storage
	horsesArray.empty();

	paternalTree searchTree;				//new paternal tree obj, used to call search functions

	string userInput = "null";			//uninitialised variables are bad, mmkay?
	string searchChoice = "null";
	string teststring;

	//arrays populated with tokenised versions of the CSV files. This could be done dynamically
	//but the assignment specification seems to require static pre-loaded choices
	dogsArray = dogParser.splitByDelimiter("Dogs.csv");
	catsArray = catParser.splitByDelimiter("Cats.csv");
	horsesArray = horseParser.splitByDelimiter("Horses.csv");
	
	cout << "Please select the array you wish to display\nd = dogs, c = cats, h = horses, a = all\nTo print a paternal tree for a particular\nmember, type ''search'', then type <first letter of group> <name>\nFor example: d baby\n";
	
	while (userInput != "quit")
	{
		cin >> userInput;

		if (userInput == "d") { dogParser.printParsed(dogsArray); }
		
		else if (userInput == "c") { catParser.printParsed(catsArray); }

		else if (userInput == "h") { horseParser.printParsed(horsesArray); }

		else if (userInput == "a") {
									 dogParser.printParsed(dogsArray);     cout << std::endl;
									 catParser.printParsed(catsArray);	   cout << std::endl;
									 horseParser.printParsed(horsesArray); cout << std::endl;}

		else if (userInput == "search")
		{
			cout << "\nPlease indicate member to search for\n";
			cin >> searchChoice >> teststring;
			
			if (searchChoice == "d")
			{
				
			}

			if (searchChoice == "c")
			{

			}

			if (searchChoice == "h")
			{

			}

			if (searchChoice == "a")
			{

			}

		}

		else { cout << "\nPlease select a recognised input\n"; cout << std::endl; }

	}
}


	/*

	while (searchChoice != "na")
	{
		cout << searchChoice << " <- ";
		searchChoice = searchTree.printPaternalTree(dogsArray, searchChoice);
	}


    parser newparse;    //creates a new parser to handle the tokenisation of the csv files.
    
    vector< vector<string> > testArray; //creates a temporary array to house delimCSV from parser.
    

    string newstringtest = "null"; //creates a string to house user input for choosing files
    string searchchoice;
    paternalTree newtree;

    //UI
    std::cout << "Please choose the file you wish to display;\nPlease avoid adding the file extension\ne.g.''dogs'' instead of ''dogs.csv''  \n";
    std::cin >> (newstringtest);
    
   
    testArray = newparse.splitByDelimiter(newstringtest+".csv");
	newparse.printParsed(testArray);

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
}*/