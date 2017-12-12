/*************************************************/
/*** Title: Tic Tac Toe Game                   ***/
/*** Developer Carlos Vazquez                  ***/
/*** Description: Creates Tic Tac Toe Game     ***/
/*************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>

using namespace std;
int win = 3.0; // Sets global varaible to three for main program loop
bool userTurn; // Allows global variable to be set to true or false
int userChoice; // Sets global variables
int computerChoice;
bool CPUpicked = false; // Sets global variables to false
bool userPicked = false;

char s1 = '1'; // Sets global varaiables as characters
char s2 = '2';
char s3 = '3';
char s4 = '4';
char s5 = '5';
char s6 = '6';
char s7 = '7';
char s8 = '8';
char s9 = '9';


void Draw_board() // Creates function to draw the game board
{
	cout << "|     |     |     |" << endl;
	cout << "|  " << s1 << "  |  " << s2 << "  |  " << s3 << "  |" << endl;
	cout << "|-----|-----|-----|" << endl;
	cout << "|  " << s4 << "  |  " << s5 << "  |  " << s6 << "  |" << endl;
	cout << "|-----|-----|-----|" << endl;
	cout << "|  " << s7 << "  |  " << s8 << "  |  " << s9 << "  |" << endl;
	cout << "|     |     |     |" << endl;
}

int check_valid(int userChoice) // Function that checks if the users entry is valid
{
	if (userChoice > 9 || userChoice < 1) // Stops user from entering anything out of range and makes them enter a new number
	{
		cout << "Invalid Entry, MUST be a number INBETWEEN one and nine" << endl;
	}
	return(userChoice);
}

int input_available(int userChoice) // Function that checks if the spot is availabe
{
	if (userChoice == 1 && s1 != '1') // If the user trys to enter a number while the space is already occupied it will make them enter a new value
	{
		cout << "Spot already taken " << endl;
	}
	else if (userChoice == 2 && s2 != '2')
	{
		cout << "Spot already taken " << endl;
	}
	else if (userChoice == 3 && s3 != '3')
	{
		cout << "Spot already taken " << endl;
	}
	else if (userChoice == 4 && s4 != '4')
	{
		cout << "Spot already taken " << endl;

	}
	else if (userChoice == 5 && s5 != '5')
	{
		cout << "Spot already taken " << endl;

	}
	else if (userChoice == 6 && s6 != '6')
	{
		cout << "Spot already taken " << endl;
	}
	else if (userChoice == 7 && s7 != '7')
	{
		cout << "Spot already taken " << endl;
	}
	else if (userChoice == 8 && s8 != '8')
	{
		cout << "Spot already taken " << endl;
	}
	else if (userChoice == 9 && s9 != '9')
	{
		cout << "Spot already taken " << endl;
	}
	return(userChoice);
}

int input_user(int userChoice) // Function that takes in user input
{
	if (userChoice == 1 && s1 == '1') // If the user enters the specified number then an X will be placed in that spot
	{
		s1 = 'X';
		userPicked = true; // This is used to tell the program that the user has successfully picked a valid entry and allows the while loop to end and the computer to go
	}
	else if (userChoice == 2 && s2 == '2')
	{
		s2 = 'X';
		userPicked = true;
	}
	else if (userChoice == 3 && s3 == '3')
	{
		s3 = 'X';
		userPicked = true;
	}
	else if (userChoice == 4 && s4 == '4')
	{
		s4 = 'X';
		userPicked = true;
	}
	else if (userChoice == 5 && s5 == '5')
	{
		s5 = 'X';
		userPicked = true;
	}
	else if (userChoice == 6 && s6 == '6')
	{
		s6 = 'X';
		userPicked = true;
	}
	else if (userChoice == 7 && s7 == '7')
	{
		s7 = 'X';
		userPicked = true;
	}
	else if (userChoice == 8 && s8 == '8')
	{
		s8 = 'X';
		userPicked = true;
	}
	else if (userChoice == 9 && s9 == '9')
	{
		s9 = 'X';
		userPicked = true;
	}
	return(userChoice);
}


int computer_turn(int computerChoice) // Function that allows computer to go
{

	computerChoice = (rand() % 9) + 1;
	if (computerChoice == 1 && s1 == '1') // Places an O based off the random number generated
	{
		s1 = 'O';
		CPUpicked = true; // Tells teh program that the computer has successfully picked a valid entry breaking out of the while loop and allowing the program to continue
	}
	else if (computerChoice == 2 && s2 == '2')
	{
		s2 = 'O';
		CPUpicked = true;
	}
	else if (computerChoice == 3 && s3 == '3')
	{
		s3 = 'O';
		CPUpicked = true;
	}
	else if (computerChoice == 4 && s4 == '4')
	{
		s4 = 'O';
		CPUpicked = true;
	}
	else if (computerChoice == 5 && s5 == '5')
	{
		s5 = 'O';
		CPUpicked = true;
	}
	else if (computerChoice == 6 && s6 == '6')
	{
		s6 = 'O';
		CPUpicked = true;
	}
	else if (computerChoice == 7 && s7 == '7')
	{
		s7 = 'O';
		CPUpicked = true;
	}
	else if (computerChoice == 8 && s8 == '8')
	{
		s8 = 'O';
		CPUpicked = true;
	}
	else if (computerChoice == 9 && s9 == '9')
	{
		s9 = 'O';
		CPUpicked = true;
	}
	return(computerChoice);
}

int computer_input_available(int computerChoice)
{
	if (computerChoice == 1 && s1 != '1') // Tells the computer that the spot is already taken
	{
		computer_turn(computerChoice); // Makes the number generator program be called again
	}
	else if (computerChoice == 2 && s2 != '2')
	{
		computer_turn(computerChoice);
	}
	else if (computerChoice == 3 && s3 != '3')
	{
		computer_turn(computerChoice);
	}
	else if (computerChoice == 4 && s4 != '4')
	{
		computer_turn(computerChoice);
	}
	else if (computerChoice == 5 && s5 != '5')
	{
		computer_turn(computerChoice);
	}
	else if (computerChoice == 6 && s6 != '6')
	{
		computer_turn(computerChoice);
	}
	else if (computerChoice == 7 && s7 != '7')
	{
		computer_turn(computerChoice);
	}
	else if (computerChoice == 8 && s8 != '8')
	{
		computer_turn(computerChoice);
	}
	else if (computerChoice == 9 && s9 != '9')
	{
		computer_turn(computerChoice);
	}

	return(computerChoice);
}
int check_winner() // Function to determine if user wins
{
	if (s1 == 'X' && s2 == 'X' && s3 == 'X' && userTurn == true) // If the the board has these requirements is will change the win variable to exit the program
	{
		win = 2.0; // the value two is used to designate that the player won
	}
	else if (s1 == 'X' && s4 == 'X' && s7 == 'X' && userTurn == true)
	{
		win = 2.0;
	}
	else if (s1 == 'X' && s5 == 'X' && s9 == 'X' && userTurn == true)
	{
		win = 2.0;
	}
	else if (s2 == 'X' && s5 == 'X' && s8 == 'X' && userTurn == true)
	{
		win = 2.0;
	}
	else if (s3 == 'X' && s6 == 'X' && s9 == 'X' && userTurn == true)
	{
		win = 2.0;

	}
	else if (s7 == 'X' && s8 == 'X' && s9 == 'X' && userTurn == true)
	{
		win = 2.0;
	}
	else if (s4 == 'X' && s5 == 'X' && s6 == 'X' && userTurn == true)
	{
		win = 2.0;
	}
	else if (s3 == 'X' && s5 == 'X' && s7 == 'X' && userTurn == true)
	{
		win = 2.0;
	}

	else if (s1 == 'O' && s2 == 'O' && s3 == 'O' && userTurn == false)
	{
		win = 1.0; // The value one is used to designate that the computer won
	}
	else if (s1 == 'O' && s4 == 'O' && s7 == 'O' && userTurn == false)
	{
		win = 1.0;
	}
	else if (s1 == 'O' && s5 == 'O' && s9 == 'O' && userTurn == false)
	{
		win = 1.0;
	}
	else if (s2 == 'O' && s5 == 'O' && s8 == 'O' && userTurn == false)
	{
		win = 1.0;
	}
	else if (s3 == 'O' && s6 == 'O' && s9 == 'O' && userTurn == false)
	{
		win = 1.0;
	}
	else if (s7 == 'O' && s8 == 'O' && s9 == 'O' && userTurn == false)
	{
		win = 1.0;
	}
	else if (s4 == 'O' && s5 == 'O' && s6 == 'O' && userTurn == false)
	{
		win = 1.0;
	}
	else if (s3 == 'O' && s5 == 'O' && s7 == 'O' && userTurn == false)
	{
		win = 1.0;
	}

	else if (s1 != '1' && s2 != '2' && s3 != '3' && s4 != '4' && s5 != '5' && s6 != '6' && s7 != '7' && s8 != '8' && s9 != '9')
	{
		win = 0; // The value 0 is used to designate that there is no winner and we have a tie
	}
	return(win);
}

int main() // Main program
{
	cout << "This is the Tic Tac Toe Game." << endl; // Outputs intro to program
	cout << "Below you will indicate your position (1-9) as shown in the table." << endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << "         Tic Tac Toe                    " << endl;
	cout << "User  (X)   -   Computer (O)            " << endl;
	Draw_board();

	do // Begins the loop for the game
	{
		userTurn = true; // Sets user turn to true allowing the user to go
		srand(time(NULL)); // Seed for number generator

		if (userTurn == true) // Sets statement for the users turn
		{

			while (!userPicked) // Creates while loop to run until the user has successfully picked an entry
			{
				cout << "Enter your position :";
				cin >> userChoice; // Takes in user input
				check_valid(userChoice); // Calls function that checks if the user entered a valid entry 
				input_available(userChoice); // Calls function that checks if the entered value is available
				input_user(userChoice); // Calls function that places an X where designated and continues the game
			}
			userPicked = false; // Sets back to false so the while loop can run again if needed
			Draw_board(); // Redraws the board with the new slots
			check_winner(); // Checks if there is a winner
			if (win == 2) // Sets statement for the winner to win
			{
				break; // Breaks out of the game
			}
			else if (win == 0) // Sets statement for tie
			{
				break; // Breaks out of the game
			}
		}

		userTurn = false; // Sets to false to allow the computer turn to begin

		if (userTurn == false) // Sets statemnet for computers turn
		{
			while (!CPUpicked) // Creates while loop to run until the computer has successfully picked an entry 
			{
				computer_input_available(computerChoice); // Calls function to make sure spaces are available 
				computer_turn(computerChoice);// Calls function to allow an O to placed where computer picked
			}
			CPUpicked = false; // Changes back to false to allow the loop to run again if necessary 
			Draw_board(); // Draws board with updated entrys
			check_winner(); // Calls function to check if there was a winner
			if (win == 1) // Sets statement for the computer to win 
			{
				break; // Breaks out of game
			}
			else if (win == 0) // Sets statement for tie 
			{
				break; // Breaks out of game
			}
		}


	} while (win > 2.0); // Keeps game going until win value is changed

	if (win == 2.0) // Checks if player won
	{
		cout << "User Wins" << endl; // Outputs winning statement
	}
	if (win == 1.0) // Checks if computer won
	{
		cout << "Computer Wins" << endl; // Outputs winning statement
	}
	if (win == 0) // Checks if tie
	{
		cout << "Its a tie" << endl; // Outputs statement
	}
	system("pause");
	return(0);

}
