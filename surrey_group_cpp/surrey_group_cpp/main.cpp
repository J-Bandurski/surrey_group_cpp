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
	parser allParser;

	vector< vector<string> > dogsArray;		//dogs storage
	dogsArray.empty();						//initialising empty vectors
	vector< vector<string> > catsArray;		//cats storage
	catsArray.empty();
	vector< vector<string> > horsesArray;	//horses storage
	horsesArray.empty();

	paternalTree searchTree;				//new paternal tree obj, used to call search functions

	string userInput = "null";				//uninitialised variables are bad, mmkay?
	string searchChoice = "null";
	string memberChoice = "null";
	string keepString = "null";

	//arrays populated with tokenised versions of the CSV files. This could be done dynamically
	//but the assignment specification seems to require static pre-loaded choices
	//in order to load dynamically, replace "Dogs.csv" or similar with (<string>+".csv")
	
	dogsArray = dogParser.splitByDelimiter("Dogs.csv");
	catsArray = catParser.splitByDelimiter("Cats.csv");
	horsesArray = horseParser.splitByDelimiter("Horses.csv");

	cout << "Please select the array you wish to display\nd = dogs, c = cats, h = horses, a = all\nTo print a paternal tree for a particular\nmember, type ''search'', then type <first letter of group> <name>\nFor example: d baby\n";
	
	//runtime loop
	while (userInput != "quit")
	{
		cin >> userInput;		//selecting a letter displays appropriate array, a displays all three arrays

		if (userInput == "d") { dogParser.printParsed(dogsArray); }
		
		else if (userInput == "c") { catParser.printParsed(catsArray); }

		else if (userInput == "h") { horseParser.printParsed(horsesArray); }

		else if (userInput == "a") { dogParser.printParsed(dogsArray);     cout << std::endl;
									 catParser.printParsed(catsArray);	   cout << std::endl;
									 horseParser.printParsed(horsesArray); cout << std::endl;}

		else if (userInput == "search")	//search used to separate array printing from paternal tree searches
		{
			cout << "\nPlease indicate member to search for\n";
			cin >> searchChoice >> memberChoice;

			try							//error handliong in case of incorrect input during search
			{
				if (searchChoice != "d" && searchChoice != "c" && searchChoice != "h" && searchChoice != "a")
				{
					throw searchChoice;
				}
			}
			catch (string e)
			{
				cout << "Input was not valid: " << e << "Is not a valid argument" << std::endl;
			}
			
			if (searchChoice == "d")
			{
				while (memberChoice != "na")
				{
					cout << memberChoice << " <- ";
					memberChoice = searchTree.printPaternalTree(dogsArray, memberChoice);
				}
			}

			else if (searchChoice == "c")
			{
				while (memberChoice != "na")
				{
					cout << memberChoice << " <- ";
					memberChoice = searchTree.printPaternalTree(catsArray, memberChoice);
				}
			}

			else if (searchChoice == "h")
			{
				while (memberChoice != "na")
				{
					cout << memberChoice << " <- ";
					memberChoice = searchTree.printPaternalTree(horsesArray, memberChoice);
				}
			}

			if (searchChoice == "a")	//"a" is basically frankenstein's abortion, but it works!
			{							//"a" queries all three arrays, displaying results for each.
				keepString = memberChoice;	//keepstring used to store memberchoice, which is overwritten with some function calls

				cout << "\nSearching in dogs: \n";
				while (memberChoice != "na")
				{
					cout << memberChoice << " <- ";

					memberChoice = searchTree.printPaternalTree(dogsArray, memberChoice);
				}

				cout << "[END]";
				memberChoice = keepString;

				cout << "\nSearching in cats: \n";
				while (memberChoice != "na")
				{
					cout << memberChoice << " <- ";

					memberChoice = searchTree.printPaternalTree(catsArray, memberChoice);
				}
				
				cout << "[END]";
				memberChoice = keepString;

				cout << "\nSearching in horses: \n";
				while (memberChoice != "na")
				{
					cout << memberChoice << " <- ";

					memberChoice = searchTree.printPaternalTree(horsesArray, memberChoice);
				}
				cout << "[END]";
			}

			else
			{
				cout << "[END]";
			}
		}
		else { cout << "\nPlease select a recognised input\n"; cout << std::endl; }
	}
}