/****************************************************/
/*** Title: Hangman                               ***/
/*** Devloper: Carlos Vazquez                     ***/
/*** Desctiption: Simulates Hangman Game          ***/
/****************************************************/
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <ctime>
#include <cmath>

using namespace std;

int turns_loss = 0; // Global variables for the counters used to run and stop the program
int turns_win = 0;
int game = 0;
int again = 0;

void hangman_gallows() // Function that draws the gallows
{
	string gallows; // String for the gallows

	switch (turns_loss) // Switch based of the turns loss counter, if it increases then the program will output more of the gallows
	{
	case 0: // Start of the gallows
	{
		gallows = " + \n"
			" | \n"
			" | \n"
			" | \n"
			" | \n"
			" | \n"
			" | \n"
			" +-------+ ";
		cout << gallows << endl;
		break;
	}
	case 1: // Adds more if the person guessed wrong
	{
		gallows = " +----+ \n"
			" | \n"
			" | \n"
			" | \n"
			" | \n"
			" | \n"
			" | \n"
			" +-------+ ";
		cout << gallows << endl;
		break;
	}
	case 2: // Adds more if the person guessed wrong
	{
		gallows = " +----+ \n"
			" |    | \n"
			" | \n"
			" | \n"
			" | \n"
			" | \n"
			" | \n"
			" +-------+ ";
		cout << gallows << endl;
		break;
	}
	case 3: // Adds more if the person guessed wrong
	{
		gallows = " +----+ \n"
			" |    | \n"
			" |    O \n"
			" | \n"
			" | \n"
			" | \n"
			" | \n"
			" +-------+ ";
		cout << gallows << endl;
		break;
	}
	case 4: // Adds more if the person guessed wrong
	{
		gallows = " +----+ \n"
			" |    | \n"
			" |    O \n"
			" |    | \n"
			" |    | \n"
			" | \n"
			" | \n"
			" +-------+ ";
		cout << gallows << endl;
		break;
	}
	case 5: // Adds more if the person guessed wrong
	{
		gallows = " +----+ \n"
			" |    | \n"
			" |    O \n"
			" |  \\ | \n"
			" |    | \n"
			" | \n"
			" | \n"
			" +-------+ ";
		cout << gallows << endl;
		break;
	}
	case 6: // Adds more if the person guessed wrong
	{
		gallows = " +----+ \n"
			" |    | \n"
			" |    O \n"
			" |  \\ | / \n"
			" |    | \n"
			" | \n"
			" | \n"
			" +-------+ ";
		cout << gallows << endl;
		break;
	}
	case 7: // Adds more if the person guessed wrong
	{
		gallows = " +----+ \n"
			" |    | \n"
			" |    O \n"
			" |  \\ | / \n"
			" |    | \ \n"
			" |   /  \n"
			" | \n"
			" +-------+ ";
		cout << gallows << endl;
		break;
	}
	case 8:// Adds more if the person guessed wrong for the last time and they will lose at this point and the program will end
	{
		gallows = " +----+ \n"
			" |    | \n"
			" |    O \n"
			" |  \\ | / \n"
			" |    | \n"
			" |   / \\ \n"
			" | \n"
			" +-------+ ";
		cout << gallows << endl << "Game over" << endl;
		break;
	}
	}

}




int main()
{


	do // Start of the program, loop that will continuosly run if player wants to play again
	{
		srand(time(NULL)); // Used for random number generator
		int num_pick; // Used for number generator to decide which word will be picked
		string word;  // Used for the word that will be chose
		char myChar[6]; // Used for the word that will be chosen
		char user_Choice; // User input
		char word_input[2][6] = { '*', '*', '*', '*' , '*' , '*',
			'_' ,  '_', '_', '_', '_', '_', }; // Characters for the display of the word

											   // cout << num_pick << endl; Was used to test to see if the program picked the right word based off the number 

		ifstream inFile;


		num_pick = (rand() % 30) + 1;
		inFile.open("Words.txt"); // Opens the text file with the words

		if (inFile.fail()) // Makes sure the file is opened successfully
		{
			cout << "The file was not opened";
			system("pause");
			exit(1);
		}


		for (int i = 0; i < num_pick; i++) // Runs a loop based off the random number
		{
			inFile >> word; // Takes in the words from that line. The final run is the word that will be used for the game

		}

		inFile.close(); // Closes the word file
						// cout << word << endl; Was used to test and make sure the word that was picked successfully

		cout << "Welcome to Hangman" << endl;
		do // Begins the game
		{

			cout << "You have " << 8 - turns_loss << " turns left to win" << endl;
			hangman_gallows(); // Calls the function that will display the gallows
			for (int x = 0; x < 2; x++) // This nested for loop will output the blank word lines
			{
				for (int y = 0; y < 6; y++)
				{
					cout << word_input[x][y];

				}
				cout << endl;
			}

			if (turns_win == 6) // Checks condition for if the player won 
			{
				cout << "The word is :" << word << endl;
				cout << "You won!" << endl;
				break; // Breaks the loop
			}
			else if (turns_loss == 8) // Checks condition for if the player will lose
			{
				cout << "Game over you lose" << endl;
				cout << "The word is :" << word << endl;
				break; // Breaks the loop

			}
			cout << "Enter a single, lower case character: " << endl;
			cin >> user_Choice; // Takes in the users letter


			for (int z = 0; z < word.length(); z++) // This for loop turns the word that was picked from a string into a set of characters
			{
				myChar[z] = word[z];

			}

			if (user_Choice == myChar[0]) // Checks if the users guess was the first letter in the word if so it then changes the * to that letter
			{
				word_input[0][0] = user_Choice;
				turns_win++; // Increases counter to show that the player won
			}
			else if (user_Choice == myChar[1]) // Checks if the users guess was the second letter in the word if so it then changes the * to that letter
			{
				word_input[0][1] = user_Choice;
				turns_win++;
			}
			else if (user_Choice == myChar[2]) // Checks if the users guess was the third letter in the word if so it then changes the * to that letter
			{
				word_input[0][2] = user_Choice;
				turns_win++;
			}
			else if (user_Choice == myChar[3]) // Checks if the users guess was the 4th letter in the word if so it then changes the * to that letter
			{
				word_input[0][3] = user_Choice;
				turns_win++;
			}
			else if (user_Choice == myChar[4]) // Checks if the users guess was the 5th letter in the word if so it then changes the * to that letter
			{
				word_input[0][4] = user_Choice;
				turns_win++;
			}
			else if (user_Choice == myChar[5]) // Checks if the users guess was the 6th letter in the word if so it then changes the * to that letter
			{
				word_input[0][5] = user_Choice;
				turns_win++;
			}

			else // This tells the program the player was wrong and will increase the loss counter thus displaying more of the gallows
			{
				cout << "That letter was not in the word" << endl;
				turns_loss++;

			}

			system("CLS");
		} while (again < 2);

		cout << "Would you like to run again? If yes enter a 1. If no enter a 3." << endl; /* Ask the user if they would like to run again
																						   if so a 1 is taken in thus repeating the program */
		cin >> game;
		system("CLS");
		if (game == 1)
		{
			turns_loss = 0; // Variables for the counters used to run and stop the program
			turns_win = 0;
			game = 0;
			again = 0;
		}
		if (game == 3)
		{
			break;
		}

	} while (game < 2);


	system("pause");
	return(0); //End the program 
}