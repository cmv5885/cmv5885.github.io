/******************************************************/
/*** Title: Battleship                              ***/
/*** Course: CPET-121-02                            ***/
/*** Developer: Carlos Vazquez                      ***/
/*** 1st Year                                       ***/
/*** Date: April 6, 2017                            ***/
/*** Description: Simulates Battleship game         ***/
/******************************************************/
#include <iostream>
#include <iomanip>
#include <ctime>
#include <string>

using namespace std; 

	int destroyer1_row; // Sets variables for the coordinates of the ship
	int destroyer1_col;
	int destroyer2_row;
	int destroyer2_col;
	int submarine1_row;
	int submarine1_col;
	int submarine2_row;
	int submarine2_col;
	int submarine3_row;
	int submarine3_col;
	
	void Destroyer_Submarine_Placement() // Function that places the destroyer and submarine
	{
		
		bool submarine_picked;
		int submarine_position;
		int destroyer_position;
		
		srand(time(NULL));
		destroyer1_row = (rand() % 6) + 1; // Runs number generators for the first point of the destroyer
		destroyer1_col = (rand() % 6) + 1;
		destroyer_position = rand() % 2; // Determines if destroyer wil be horizotnal or vertical

		switch (destroyer1_row) // Uses switch statement to determine the other coordinate of the destroyer
		{
		case 1: // Used for case of first point being in row one
		{
			if (destroyer_position = 0) // Statement for horizontal coordinates. Places second point on board appropriatly based off the point of the first so it doesn't go off the board
			{
				destroyer2_row = 1;

				if (destroyer1_col = 1)
				{
					destroyer2_col = 2;
				}
				else if (destroyer1_col = 6)
				{
					destroyer2_col = 5;
				}
				else
				{
					destroyer2_col = destroyer1_col + 1;
				}

			}
			else if (destroyer_position = 1) // Statement for Vertical coordinates  Places second point on board appropriatly  based off the point of the first so it doesn't go off  the board
			{
				destroyer2_row = 2;
				destroyer2_col = destroyer1_col;
			}
			break;
		}
		case 2:  // Used for case of first point being in row two
		{

			if (destroyer_position = 0) // Statement for horizontal coordinates. Places second point on board appropriatly based off the point of the first so it doesn't go off the board 
			{
				destroyer2_row = 2;
				if (destroyer1_col = 1)
				{
					destroyer2_col = 2;
				}
				else if (destroyer1_col = 6)
				{
					destroyer2_col = 5;
				}
				else
				{
					destroyer2_col = destroyer1_col + 1;
				}
			}
			else if (destroyer_position = 1) // Statement for Vertical coordinates  Places second point on board appropriatly based off the point of the first so it doesn't go off the board
			{
				destroyer2_row = 1;
				destroyer2_col = destroyer1_col;
			}
			break;
		}
		case 3:  // Used for case of first point being in row three
		{
			if (destroyer_position = 0) // Statement for horizontal coordinates. Places second point on board appropriatly  based off the point of the first so it doesn't go off the board 
			{
				destroyer2_row = 3;
				if (destroyer1_col = 1)
				{
					destroyer2_col = 2;
				}
				else if (destroyer1_col = 6)
				{
					destroyer2_col = 5;
				}
				else
				{
					destroyer2_col = destroyer1_col + 1;
				}
			}
			else if (destroyer_position = 1) // Statement for Vertical coordinates  Places second point on board appropriatly based off the point of the first so it doesn't go off the board
			{
				destroyer2_row = 4;
				destroyer2_col = destroyer1_col;
			}
			break;
		}
		case 4:  // Used for case of first point being in row four
		{
			if (destroyer_position = 0)  // Statement for horizontal coordinates. Places second point on board appropriatly based off the point of the first so it doesn't go off the board 
			{
				destroyer2_row = 4;
				if (destroyer1_col = 1)
				{
					destroyer2_col = 2;
				}
				else if (destroyer1_col = 6)
				{
					destroyer2_col = 5;
				}
				else
				{
					destroyer2_col = destroyer1_col + 1;
				}
			}
			else if (destroyer_position = 1) // Statement for Vertical coordinates  Places second point on board appropriatly based off the point of the first so it doesn't go off the board
			{
				destroyer2_row = 3;
				destroyer2_col = destroyer1_col;
			}
			break;
		}
		case 5:  // Used for case of first point being in row five
		{
			if (destroyer_position = 0) // Statement for horizontal coordinates. Places second point on board appropriatly based off the point of the first so it doesn't go off the board
			{
				destroyer2_row = 5;
				if (destroyer1_col = 1)
				{
					destroyer2_col = 2;
				}
				else if (destroyer1_col = 6)
				{
					destroyer2_col = 5;
				}
				else
				{
					destroyer2_col = destroyer1_col + 1;
				}
			}
			else if (destroyer_position = 1) // Statement for Vertical coordinates  Places second point on board appropriatly based off the point of the first so it doesn't go off the board
			{
				destroyer2_row = 6;
				destroyer2_col = destroyer1_col;
			}
			break;
		}
		case 6: // Used for case of first point being in row six
		{
			if (destroyer_position = 0) // Statement for Vertical coordinates  Places second point on board appropriatly based off the point of the first so it doesn't go off the board
			{
				destroyer2_row = 6;
				if (destroyer1_col = 1)
				{
					destroyer2_col = 2;
				}
				else if (destroyer1_col = 6)
				{
					destroyer2_col = 5;
				}
				else
				{
					destroyer2_col = destroyer1_col + 1;
				}
			}
			else if (destroyer_position = 1) // Statement for Vertical coordinates  Places second point on board appropriatly based off the point of the first so it doesn't go off the board
			{
				destroyer2_row = 5;
				destroyer2_col = destroyer1_col;
			}
			break;
		}
		}


		submarine_position = rand() % 2; // Random generator to determine weather ship will be horizontal or vertical
		submarine_picked = false;

		do // Loop that will run until submarine points are successfully picked
		{

			submarine1_row = (rand() % 6) + 1; // Random generators to generate the first coordinates of the submarine 
			submarine1_col = (rand() % 6) + 1;

			if (submarine1_row && submarine1_col == destroyer1_row && destroyer1_col) // Checks if submarine points are equal to the destoryer
			{
				submarine_picked == false; // Will re run loop from beginning if points are the same
			}

			else if (submarine1_row && submarine1_col == destroyer2_row && destroyer2_col)
			{
				submarine_picked == false;
			}

			else if ((submarine1_row && submarine1_col != destroyer1_row && destroyer1_col) || 
				(submarine1_row && submarine1_col != destroyer2_row && destroyer2_col)) // Checks if submarine points are equal to the destoryer
			{
				switch (submarine1_row) // Uses switch statement to determine the other coordinate of the submarine
				{
					case 1: // Used for case of first point being in row one
					{
						if (submarine_position = 0) // Statement for Horizontal coordinates  Places other coordinates on board appropriatly  based off the point of the first so it doesn't go off the board
						{
							submarine2_row = 1;
							submarine3_row = 1;
							if (submarine1_col = 1)
							{
								submarine2_col = 2;
								submarine3_col = 3;
								if (submarine2_row && submarine2_col == destroyer2_row && destroyer2_col) // Checks if submarine points are equal to the destoryer
								{
									submarine_picked == false; // Will re run loop from beginning if points are the same
								}
								else if (submarine3_row && submarine3_col == destroyer2_row && destroyer2_col)
								{
									submarine_picked == false;
								}
								else if (submarine3_row && submarine3_col == destroyer1_row && destroyer1_col)
								{
									submarine_picked == false;
								}
								else if (submarine2_row && submarine2_col == destroyer1_row && destroyer1_col)
								{
									submarine_picked == false;
								}
								else
								{
									submarine_picked = true;
									break;
								}
							}
							else if (submarine1_col = 6)
							{
								submarine2_col = 5;
								submarine3_col = 4;
								if (submarine2_row && submarine2_col == destroyer2_row && destroyer2_col)
								{
									submarine_picked == false;
								}
								else if (submarine3_row && submarine3_col == destroyer2_row && destroyer2_col)
								{
									submarine_picked == false;
								}
								else if (submarine3_row && submarine3_col == destroyer1_row && destroyer1_col)
								{
									submarine_picked == false;
								}
								else if (submarine2_row && submarine2_col == destroyer1_row && destroyer1_col)
								{
									submarine_picked == false;
								}
								else
								{
									submarine_picked = true;
									break;
								}
							}
							
							else if (submarine1_col = 5)
							{
								submarine2_col = 6;
								submarine3_col = 4;
								if (submarine2_row && submarine2_col == destroyer2_row && destroyer2_col)
								{
									submarine_picked == false;
								}
								else if (submarine3_row && submarine3_col == destroyer2_row && destroyer2_col)
								{
									submarine_picked == false;
								}
								else if (submarine3_row && submarine3_col == destroyer1_row && destroyer1_col)
								{
									submarine_picked == false;
								}
								else if (submarine2_row && submarine2_col == destroyer1_row && destroyer1_col)
								{
									submarine_picked == false;
								}
								else
								{
									submarine_picked = true;
									break;
								}
							}

							else // Account for when ship is placed in col 2, 3, 4, 
							{
								submarine2_col = submarine1_col + 1;
								submarine3_col = submarine1_col + 2;
								if (submarine2_row && submarine2_col == destroyer2_row && destroyer2_col)
								{
									submarine_picked == false;
								}
								else if (submarine3_row && submarine3_col == destroyer2_row && destroyer2_col)
								{
									submarine_picked == false;
								}
								else if (submarine3_row && submarine3_col == destroyer1_row && destroyer1_col)
								{
									submarine_picked == false;
								}
								else if (submarine2_row && submarine2_col == destroyer1_row && destroyer1_col)
								{
									submarine_picked == false;
								}
								else
								{
									submarine_picked = true;
									break;
								}
						
							}

						}
						else if (submarine_position = 1) // Statement for Vertical coordinates  Places other coordinates on board appropriatly  based off the point of the first so it doesn't go off the board
						{
							submarine2_row = 2;
							submarine3_row = 3;
							submarine2_col = submarine1_col;
							submarine3_col = submarine1_col;
							if (submarine2_row && submarine2_col == destroyer2_row && destroyer2_col)
							{
								submarine_picked == false;
							}
							else if (submarine3_row && submarine3_col == destroyer2_row && destroyer2_col)
							{
								submarine_picked == false;
							}
							else if (submarine3_row && submarine3_col == destroyer1_row && destroyer1_col)
							{
								submarine_picked == false;
							}
							else if (submarine2_row && submarine2_col == destroyer1_row && destroyer1_col)
							{
								submarine_picked == false;
							}
							else
							{
								submarine_picked = true;
								break;
							}
						}
					}
					
					case 2: // Used for case of first point being in row two
					{
						if (submarine_position = 0) // Statement for Horizontal coordinates  Places other coordinates on board appropriatly  based off the point of the first so it doesn't go off the board
						{
							submarine2_row = 2;
							submarine3_row = 2;
							if (submarine1_col = 1)
							{
								submarine2_col = 2;
								submarine3_col = 3;
								if (submarine2_row && submarine2_col == destroyer2_row && destroyer2_col)  // Checks if submarine points are equal to the destoryer
								{
									submarine_picked == false; // Reruns if points are equal
								}
								else if (submarine3_row && submarine3_col == destroyer2_row && destroyer2_col)
								{
									submarine_picked == false;
								}
								else if (submarine3_row && submarine3_col == destroyer1_row && destroyer1_col)
								{
									submarine_picked == false;
								}
								else if (submarine2_row && submarine2_col == destroyer1_row && destroyer1_col)
								{
									submarine_picked == false;
								}
								else
								{
									submarine_picked = true;
									break;
								}
							}
							else if (submarine1_col = 6)
							{
								submarine2_col = 5;
								submarine3_col = 4;
								if (submarine2_row && submarine2_col == destroyer2_row && destroyer2_col)
								{
									submarine_picked == false;
								}
								else if (submarine3_row && submarine3_col == destroyer2_row && destroyer2_col)
								{
									submarine_picked == false;
								}
								else if (submarine3_row && submarine3_col == destroyer1_row && destroyer1_col)
								{
									submarine_picked == false;
								}
								else if (submarine2_row && submarine2_col == destroyer1_row && destroyer1_col)
								{
									submarine_picked == false;
								}
								else
								{
									submarine_picked = true;
									break;
								}
							}

							else if (submarine1_col = 5)
							{
								submarine2_col = 6;
								submarine3_col = 4;
								if (submarine2_row && submarine2_col == destroyer2_row && destroyer2_col)
								{
									submarine_picked == false;
								}
								else if (submarine3_row && submarine3_col == destroyer2_row && destroyer2_col)
								{
									submarine_picked == false;
								}
								else if (submarine3_row && submarine3_col == destroyer1_row && destroyer1_col)
								{
									submarine_picked == false;
								}
								else if (submarine2_row && submarine2_col == destroyer1_row && destroyer1_col)
								{
									submarine_picked == false;
								}
								else
								{
									submarine_picked = true;
									break;
								}
							}

							else // Account for when ship is placed in col 2, 3, 4, 
							{
								submarine2_col = submarine1_col + 1;
								submarine3_col = submarine1_col + 2;
								if (submarine2_row && submarine2_col == destroyer2_row && destroyer2_col)
								{
									submarine_picked == false;
								}
								else if (submarine3_row && submarine3_col == destroyer2_row && destroyer2_col)
								{
									submarine_picked == false;
								}
								else if (submarine3_row && submarine3_col == destroyer1_row && destroyer1_col)
								{
									submarine_picked == false;
								}
								else if (submarine2_row && submarine2_col == destroyer1_row && destroyer1_col)
								{
									submarine_picked == false;
								}
								else
								{
									submarine_picked = true;
									break;
								}

							}

						}
						else if (submarine_position = 1) // Statement for Vertical coordinates  Places other coordinates on board appropriatly  based off the point of the first so it doesn't go off the board
						{
							submarine2_row = 3;
							submarine3_row = 4;
							submarine2_col = submarine1_col;
							submarine3_col = submarine1_col;
							if (submarine2_row && submarine2_col == destroyer2_row && destroyer2_col) // Checks if submarine points are equal to the destoryer
							{
								submarine_picked == false; // Reruns if equal
							}
							else if (submarine3_row && submarine3_col == destroyer2_row && destroyer2_col)
							{
								submarine_picked == false;
							}
							else if (submarine3_row && submarine3_col == destroyer1_row && destroyer1_col)
							{
								submarine_picked == false;
							}
							else if (submarine2_row && submarine2_col == destroyer1_row && destroyer1_col)
							{
								submarine_picked == false;
							}
							else
							{
								submarine_picked = true;
								break;
							}
						}
					}

					case 3: // Used for case of first point being in row three
					{
						if (submarine_position = 0) // Statement for Horizontal coordinates  Places other coordinates on board appropriatly  based off the point of the first so it doesn't go off the board
						{
							submarine2_row = 3;
							submarine3_row = 3;
							if (submarine1_col = 1)
							{
								submarine2_col = 2;
								submarine3_col = 3;
								if (submarine2_row && submarine2_col == destroyer2_row && destroyer2_col) // Checks is submarine points are equal to destroyer
								{
									submarine_picked == false; //Reruns loop if points are equal
								}
								else if (submarine3_row && submarine3_col == destroyer2_row && destroyer2_col)
								{
									submarine_picked == false;
								}
								else if (submarine3_row && submarine3_col == destroyer1_row && destroyer1_col)
								{
									submarine_picked == false;
								}
								else if (submarine2_row && submarine2_col == destroyer1_row && destroyer1_col)
								{
									submarine_picked == false;
								}
								else
								{
									submarine_picked = true;
									break;
								}
							}
							else if (submarine1_col = 6)
							{
								submarine2_col = 5;
								submarine3_col = 4;
								if (submarine2_row && submarine2_col == destroyer2_row && destroyer2_col)
								{
									submarine_picked == false;
								}
								else if (submarine3_row && submarine3_col == destroyer2_row && destroyer2_col)
								{
									submarine_picked == false;
								}
								else if (submarine3_row && submarine3_col == destroyer1_row && destroyer1_col)
								{
									submarine_picked == false;
								}
								else if (submarine2_row && submarine2_col == destroyer1_row && destroyer1_col)
								{
									submarine_picked == false;
								}
								else
								{
									submarine_picked = true;
									break;
								}
							}

							else if (submarine1_col = 5)
							{
								submarine2_col = 6;
								submarine3_col = 4;
								if (submarine2_row && submarine2_col == destroyer2_row && destroyer2_col)
								{
									submarine_picked == false;
								}
								else if (submarine3_row && submarine3_col == destroyer2_row && destroyer2_col)
								{
									submarine_picked == false;
								}
								else if (submarine3_row && submarine3_col == destroyer1_row && destroyer1_col)
								{
									submarine_picked == false;
								}
								else if (submarine2_row && submarine2_col == destroyer1_row && destroyer1_col)
								{
									submarine_picked == false;
								}
								else
								{
									submarine_picked = true;
									break;
								}
							}

							else // Account for when ship is placed in col 2, 3, 4, 
							{
								submarine2_col = submarine1_col + 1;
								submarine3_col = submarine1_col + 2;
								if (submarine2_row && submarine2_col == destroyer2_row && destroyer2_col)
								{
									submarine_picked == false;
								}
								else if (submarine3_row && submarine3_col == destroyer2_row && destroyer2_col)
								{
									submarine_picked == false;
								}
								else if (submarine3_row && submarine3_col == destroyer1_row && destroyer1_col)
								{
									submarine_picked == false;
								}
								else if (submarine2_row && submarine2_col == destroyer1_row && destroyer1_col)
								{
									submarine_picked == false;
								}
								else
								{
									submarine_picked = true;
									break;
								}

							}

						}
						else if (submarine_position = 1) // Statement for Vertical coordinates  Places other coordinates on board appropriatly  based off the point of the first so it doesn't go off the board
						{
							submarine2_row = 4;
							submarine3_row = 5;
							submarine2_col = submarine1_col;
							submarine3_col = submarine1_col;
							if (submarine2_row && submarine2_col == destroyer2_row && destroyer2_col)
							{
								submarine_picked == false;
							}
							else if (submarine3_row && submarine3_col == destroyer2_row && destroyer2_col)
							{
								submarine_picked == false;
							}
							else if (submarine3_row && submarine3_col == destroyer1_row && destroyer1_col)
							{
								submarine_picked == false;
							}
							else if (submarine2_row && submarine2_col == destroyer1_row && destroyer1_col)
							{
								submarine_picked == false;
							}
							else
							{
								submarine_picked = true;
								break;
							}
						}
					}

					case 4: // Used for case of first point being in row four
					{
						if (submarine_position = 0) // Statement for Horizontal coordinates  Places other coordinates on board appropriatly  based off the point of the first so it doesn't go off the board
						{
							submarine2_row = 4;
							submarine3_row = 4;
							if (submarine1_col = 1)
							{
								submarine2_col = 2;
								submarine3_col = 3;
								if (submarine2_row && submarine2_col == destroyer2_row && destroyer2_col) // Checks if destroyer points are equal to submarine
								{
									submarine_picked == false; //Reruns loop if points are equal
								}
								else if (submarine3_row && submarine3_col == destroyer2_row && destroyer2_col)
								{
									submarine_picked == false;
								}
								else if (submarine3_row && submarine3_col == destroyer1_row && destroyer1_col)
								{
									submarine_picked == false;
								}
								else if (submarine2_row && submarine2_col == destroyer1_row && destroyer1_col)
								{
									submarine_picked == false;
								}
								else
								{
									submarine_picked = true;
									break;
								}
							}
							else if (submarine1_col = 6)
							{
								submarine2_col = 5;
								submarine3_col = 4;
								if (submarine2_row && submarine2_col == destroyer2_row && destroyer2_col)
								{
									submarine_picked == false;
								}
								else if (submarine3_row && submarine3_col == destroyer2_row && destroyer2_col)
								{
									submarine_picked == false;
								}
								else if (submarine3_row && submarine3_col == destroyer1_row && destroyer1_col)
								{
									submarine_picked == false;
								}
								else if (submarine2_row && submarine2_col == destroyer1_row && destroyer1_col)
								{
									submarine_picked == false;
								}
								else
								{
									submarine_picked = true;
									break;
								}
							}

							else if (submarine1_col = 5)
							{
								submarine2_col = 6;
								submarine3_col = 4;
								if (submarine2_row && submarine2_col == destroyer2_row && destroyer2_col)
								{
									submarine_picked == false;
								}
								else if (submarine3_row && submarine3_col == destroyer2_row && destroyer2_col)
								{
									submarine_picked == false;
								}
								else if (submarine3_row && submarine3_col == destroyer1_row && destroyer1_col)
								{
									submarine_picked == false;
								}
								else if (submarine2_row && submarine2_col == destroyer1_row && destroyer1_col)
								{
									submarine_picked == false;
								}
								else
								{
									submarine_picked = true;
									break;
								}
							}

							else // Account for when ship is placed in col 2, 3, 4, 
							{
								submarine2_col = submarine1_col + 1;
								submarine3_col = submarine1_col + 2;
								if (submarine2_row && submarine2_col == destroyer2_row && destroyer2_col)
								{
									submarine_picked == false;
								}
								else if (submarine3_row && submarine3_col == destroyer2_row && destroyer2_col)
								{
									submarine_picked == false;
								}
								else if (submarine3_row && submarine3_col == destroyer1_row && destroyer1_col)
								{
									submarine_picked == false;
								}
								else if (submarine2_row && submarine2_col == destroyer1_row && destroyer1_col)
								{
									submarine_picked == false;
								}
								else
								{
									submarine_picked = true;
									break;
								}

							}

						}
						else if (submarine_position = 1) // Statement for Vertical coordinates  Places other coordinates on board appropriatly  based off the point of the first so it doesn't go off the board
						{
							submarine2_row = 5;
							submarine3_row = 6;
							submarine2_col = submarine1_col;
							submarine3_col = submarine1_col;
							if (submarine2_row && submarine2_col == destroyer2_row && destroyer2_col) //Checks if submarine points are equal to destroyer
							{
								submarine_picked == false; //reruns if equal
							}
							else if (submarine3_row && submarine3_col == destroyer2_row && destroyer2_col)
							{
								submarine_picked == false;
							}
							else if (submarine3_row && submarine3_col == destroyer1_row && destroyer1_col)
							{
								submarine_picked == false;
							}
							else if (submarine2_row && submarine2_col == destroyer1_row && destroyer1_col)
							{
								submarine_picked == false;
							}
							else
							{
								submarine_picked = true;
								break;
							}
						}
					}
					case 5: // Used for case of first point being in row five
					{
						if (submarine_position = 0) // Statement for Horizontal coordinates  Places other coordinates on board appropriatly  based off the point of the first so it doesn't go off the board
						{
							submarine2_row = 5;
							submarine3_row = 5;
							if (submarine1_col = 1)
							{
								submarine2_col = 2;
								submarine3_col = 3;
								if (submarine2_row && submarine2_col == destroyer2_row && destroyer2_col) //Checks if submarine points are equal to destroyers
								{
									submarine_picked == false; // Reruns loop if equal
								}
								else if (submarine3_row && submarine3_col == destroyer2_row && destroyer2_col)
								{
									submarine_picked == false;
								}
								else if (submarine3_row && submarine3_col == destroyer1_row && destroyer1_col)
								{
									submarine_picked == false;
								}
								else if (submarine2_row && submarine2_col == destroyer1_row && destroyer1_col)
								{
									submarine_picked == false;
								}
								else
								{
									submarine_picked = true;
									break;
								}
							}
							else if (submarine1_col = 6)
							{
								submarine2_col = 5;
								submarine3_col = 4;
								if (submarine2_row && submarine2_col == destroyer2_row && destroyer2_col)
								{
									submarine_picked == false;
								}
								else if (submarine3_row && submarine3_col == destroyer2_row && destroyer2_col)
								{
									submarine_picked == false;
								}
								else if (submarine3_row && submarine3_col == destroyer1_row && destroyer1_col)
								{
									submarine_picked == false;
								}
								else if (submarine2_row && submarine2_col == destroyer1_row && destroyer1_col)
								{
									submarine_picked == false;
								}
								else
								{
									submarine_picked = true;
									break;
								}
							}

							else if (submarine1_col = 5)
							{
								submarine2_col = 6;
								submarine3_col = 4;
								if (submarine2_row && submarine2_col == destroyer2_row && destroyer2_col)
								{
									submarine_picked == false;
								}
								else if (submarine3_row && submarine3_col == destroyer2_row && destroyer2_col)
								{
									submarine_picked == false;
								}
								else if (submarine3_row && submarine3_col == destroyer1_row && destroyer1_col)
								{
									submarine_picked == false;
								}
								else if (submarine2_row && submarine2_col == destroyer1_row && destroyer1_col)
								{
									submarine_picked == false;
								}
								else
								{
									submarine_picked = true;
									break;
								}
							}

							else // Account for when ship is placed in col 2, 3, 4, 
							{
								submarine2_col = submarine1_col + 1;
								submarine3_col = submarine1_col + 2;
								if (submarine2_row && submarine2_col == destroyer2_row && destroyer2_col)
								{
									submarine_picked == false;
								}
								else if (submarine3_row && submarine3_col == destroyer2_row && destroyer2_col)
								{
									submarine_picked == false;
								}
								else if (submarine3_row && submarine3_col == destroyer1_row && destroyer1_col)
								{
									submarine_picked == false;
								}
								else if (submarine2_row && submarine2_col == destroyer1_row && destroyer1_col)
								{
									submarine_picked == false;
								}
								else
								{
									submarine_picked = true;
									break;
								}

							}

						}
						else if (submarine_position = 1) // Statement for Vertical coordinates  Places other coordinates on board appropriatly  based off the point of the first so it doesn't go off the board
						{
							submarine2_row = 4;
							submarine3_row = 6;
							submarine2_col = submarine1_col;
							submarine3_col = submarine1_col;
							if (submarine2_row && submarine2_col == destroyer2_row && destroyer2_col) //Checks if points are equal
							{
								submarine_picked == false; //Reruns loop if needed
							}
							else if (submarine3_row && submarine3_col == destroyer2_row && destroyer2_col)
							{
								submarine_picked = false;
							}
							else if (submarine3_row && submarine3_col == destroyer1_row && destroyer1_col)
							{
								submarine_picked == false;
							}
							else if (submarine2_row && submarine2_col == destroyer1_row && destroyer1_col)
							{
								submarine_picked == false;
							}
							else
							{
								submarine_picked == true;
								break;
							}
						}
					}
					case 6:  // Used for case of first point being in row six
					{
						if (submarine_position = 0) // Statement for Horizontal coordinates  Places other coordinates on board appropriatly  based off the point of the first so it doesn't go off the board
						{
							submarine2_row = 6;
							submarine3_row = 6;
							if (submarine1_col = 1)
							{
								submarine2_col = 2;
								submarine3_col = 3;
								if (submarine2_row && submarine2_col == destroyer2_row && destroyer2_col) //Checks if submarine points equal destroyer points
								{
									submarine_picked == false; //Reruns loop if needed
								}
								else if (submarine3_row && submarine3_col == destroyer2_row && destroyer2_col)
								{
									submarine_picked == false;
								}
								else if (submarine3_row && submarine3_col == destroyer1_row && destroyer1_col)
								{
									submarine_picked == false;
								}
								else if (submarine2_row && submarine2_col == destroyer1_row && destroyer1_col)
								{
									submarine_picked == false;
								}
								else
								{
									submarine_picked = true;
									break;
								}
							}
							else if (submarine1_col = 6)
							{
								submarine2_col = 5;
								submarine3_col = 4;
								if (submarine2_row && submarine2_col == destroyer2_row && destroyer2_col)
								{
									submarine_picked == false;
								}
								else if (submarine3_row && submarine3_col == destroyer2_row && destroyer2_col)
								{
									submarine_picked == false;
								}
								else if (submarine3_row && submarine3_col == destroyer1_row && destroyer1_col)
								{
									submarine_picked == false;
								}
								else if (submarine2_row && submarine2_col == destroyer1_row && destroyer1_col)
								{
									submarine_picked == false;
								}
								else
								{
									submarine_picked = true;
									break;
								}
							}

							else if (submarine1_col = 5)
							{
								submarine2_col = 6;
								submarine3_col = 4;
								if (submarine2_row && submarine2_col == destroyer2_row && destroyer2_col)
								{
									submarine_picked == false;
								}
								else if (submarine3_row && submarine3_col == destroyer2_row && destroyer2_col)
								{
									submarine_picked == false;
								}
								else if (submarine3_row && submarine3_col == destroyer1_row && destroyer1_col)
								{
									submarine_picked == false;
								}
								else if (submarine2_row && submarine2_col == destroyer1_row && destroyer1_col)
								{
									submarine_picked == false;
								}
								else
								{
									submarine_picked = true;
									break;
								}
							}

							else // Account for when ship is placed in col 2, 3, 4, 
							{
								submarine2_col = submarine1_col + 1;
								submarine3_col = submarine1_col + 2;
								if (submarine2_row && submarine2_col == destroyer2_row && destroyer2_col)
								{
									submarine_picked == false;
								}
								else if (submarine3_row && submarine3_col == destroyer2_row && destroyer2_col)
								{
									submarine_picked == false;
								}
								else if (submarine3_row && submarine3_col == destroyer1_row && destroyer1_col)
								{
									submarine_picked == false;
								}
								else if (submarine2_row && submarine2_col == destroyer1_row && destroyer1_col)
								{
									submarine_picked == false;
								}
								else
								{
									submarine_picked = true;
									break;
								}

							}

						}
						else if (submarine_position = 1) // Statement for Vertical coordinates  Places other coordinates on board appropriatly  based off the point of the first so it doesn't go off the board
						{
							submarine2_row = 4;
							submarine3_row = 5;
							submarine2_col = submarine1_col;
							submarine3_col = submarine1_col;
							if (submarine2_row && submarine2_col == destroyer2_row && destroyer2_col) // Checks if submarine points are equal to destroyer
							{
								submarine_picked == false; // Reruns if needed
							}
							else if (submarine3_row && submarine3_col == destroyer2_row && destroyer2_col)
							{
								submarine_picked == false;
							}
							else if (submarine3_row && submarine3_col == destroyer1_row && destroyer1_col)
							{
								submarine_picked == false;
							}
							else if (submarine2_row && submarine2_col == destroyer1_row && destroyer1_col)
							{
								submarine_picked == false;
							}
							else
							{
								submarine_picked = true;
								break;
							}
						}
					}
				}
				
			}

		} while (submarine_picked == false);
}

int main() // Main program
{
	int hit = 0; //Counters for the game
	int destroyer_hit = 0;
	int submarine_hit = 0;
	int R, C; // Input variables
	bool userpicked;

	string ocean[7][7] = { "  ", "| 1 |", " 2 |", " 3 |", " 4 |", " 5 |", " 6 |",  // The board of the game
						   " 1|", " - |", " - |", " - |", " - |", " - |", " - |",
						   " 2|", " - |", " - |", " - |", " - |", " - |", " - |",
						   " 3|", " - |", " - |", " - |", " - |", " - |", " - |",
						   " 4|", " - |", " - |", " - |", " - |", " - |", " - |",
						   " 5|", " - |", " - |", " - |", " - |", " - |", " - |",
						   " 6|", " - |", " - |", " - |", " - |", " - |", " - |", };
	
	Destroyer_Submarine_Placement(); // Calls function that will place the Destroyer and Submarine

	do // Loop that will run the game
	{
	cout << "  +---+---+---+---+---+---+" << endl; // Outputs the game board
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			cout << ocean[i][j] ;
			
		}
		cout << endl;
		cout << "  +---+---+---+---+---+---+" << endl;
	}

	userpicked = false;

	while (userpicked = false); // Loop that wil run until user enters in a valid coordinate
	{
		cout << "Enter Coordinate: {R, C}" << endl; //Takes in user input
		cin >> R;
		cin >> C;
		if (R >= 1 && C <= 6) // Makes sure user input is valid
		{
			userpicked = true;
		}
		
		else
		{
			cout << "Error" << endl;
			continue;
			
		}
	}
	system("CLS"); // Clears the screen

	if ((R == destroyer1_row) && (C == destroyer1_col)) // Checks hit condition for destroyer
	{
		cout << "Hit!" << endl; //Outputs hit
		destroyer_hit = destroyer_hit + 1; //Increases counter
		ocean[R][C] = " H |";
		if (destroyer_hit == 2) //Checks if ship is sunk
		{
			cout << "You sank the destroyer" << endl;
		}
		if ((destroyer_hit == 2) && (submarine_hit == 3)) //Checks if both ships have sunk
		{
			hit = 3; //Ends game
		}
	}

	else if ((R == destroyer2_row) && (C == destroyer2_col))  // Checks hit condition for destroyer
	{
		cout << "Hit!" << endl; //Outputs hit
		destroyer_hit = destroyer_hit + 1; //Increases counter
		ocean[R][C] = " H |";
		if (destroyer_hit == 2)  //Checks if ship is sunk
		{
			cout << "You sank the destroyer" << endl;
		}
		if ((destroyer_hit == 2) && (submarine_hit == 3)) //Checks if both ships have sunk
		{
			hit = 3; //Ends game
		}
	}

	else if ((R == submarine1_row) && (C == submarine1_col)) // Checks hit condition for submarine
	{
		cout << "Hit!" << endl;  //Outputs hit
		submarine_hit = submarine_hit + 1; //Increases counter
		ocean[R][C] = " H |";
		if (submarine_hit == 3) //Checks if ship is sunk
		{
			cout << "You sank the submarine" << endl;
		}
		if ((destroyer_hit == 2) && (submarine_hit == 3)) //Checks if both ships have sunk
		{
			hit = 3; //Ends game
		}
	}

	else if ((R == submarine2_row) && (C == submarine2_col)) // Checks hit condition for submarine
	{
		cout << "Hit!" << endl; //Outputs hit
		submarine_hit = submarine_hit + 1; //Increases counter
		ocean[R][C] = " H |";
		if (submarine_hit == 3)
		{
			cout << "You sank the submarine" << endl;
		}
		if ((destroyer_hit == 2) && (submarine_hit == 3)) //Checks if both ships have sunk
		{
			hit = 3; //Ends game
		}
	}

	else if ((R == submarine3_row) && (C == submarine3_col)) // Checks hit condition for submarine
	{
		cout << "Hit!" << endl; //Outputs hit
		submarine_hit = submarine_hit + 1; //Increases counter
		ocean[R][C] = " H |";
		if (submarine_hit == 3)
		{
			cout << "You sank the submarine" << endl;
		}
		if ((destroyer_hit == 2) && (submarine_hit == 3)) //Checks if both ships have sunk
		{
			hit = 3; //Ends game
		}
	}

	else
	{
		cout << "Miss!" << endl; //Outputs a miss
		ocean[R][C] = " M |";
	}

 

	} while (hit < 2); // Breaks loop
	
	cout << "Game over! You sunk the submarine and the Destroyer!" << endl; // Tells player game is over


	system("pause");
	return(0);
}