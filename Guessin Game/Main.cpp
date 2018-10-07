#include <iostream>
#include <ctime>
#include "stdlib.h"

using namespace std;

/*
TODO:
1 report turns it takes to win
2 show higher or lower on guess
*/

int main()
{
	

	bool exitCondition = false;

	while (!exitCondition)
	{



		cout << "Main Menu" << endl;
		cout << "Press 1 to start a new game" << endl;
		cout << "Press 2 to exit" << endl;
		cout << "Input: ";
		int select;
		cin >> select;
		if (select == 1)
		{
			bool win = false;
			int min = 1, max = 100, tries = 0;

			int turns = 10;
			srand(time(NULL));
			int number = rand() % max + min;

			for (int i = 1; i <= turns; i++)
			{

				cout << endl;
				cout << endl;
				cout << "Welcome  - Please pick a number between " << min << " and  " << max << endl;
				cout << " You have " << turns - i << " turns" << endl;

				int  guess;
				cin >> guess;

				if (guess == number)
				{
					win = true;
					break;
				}
				else if (guess > number) {
					std::cout << "Too high! Try again.\n";
				}
				else if (guess < number) {
					std::cout << "Too low! Try again.\n";
				}
				

				// If wrong, increment tries.
				tries++;
	
	
			}
			if (win)
			{
				std::cout << "Congratz!! " << std::endl;
				std::cout << "You got the right number in " << tries << " tries!\n";

			}
			else
			{
				cout << "Wrong!" << endl;
			}
		}
		

		
		else if (select == 2)
		{

			
			cout << "Goodbye!" << endl;
			break;


		}
		else
		{
			cout << "Invalid input, please select 1 for new game or 2 for exit." << endl;
		}
	}

	system("pause");
	return 0;
}