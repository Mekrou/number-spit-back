#include "../Bjarne/std_lib_facilities.h"
#include <iostream>

int main()
{
	vector<string> digits = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten" };
	
	for (string input; cin >> input;)
	{
		bool debounce = false;

		// First we check if it is in word format.
		for (int i = 0; i < digits.size(); i++)
		{
			if (input == digits[i])
			{
				cout << i << endl;
				debounce = true;
			}
		}

		// Now we check if it is an int.
		if (!debounce)
		{
			int input_int = atoi(input.c_str());
			switch (input_int)
			{
			case 0:
				cout << digits[0] << endl;
				break;
			case 1:
				cout << digits[1] << endl;
				break;
			case 2:
				cout << digits[2] << endl;
				break;
			case 3:
				cout << digits[3] << endl;
				break;
			case 4:
				cout << digits[4] << endl;
				break;
			case 5:
				cout << digits[5] << endl;
				break;
			case 6:
				cout << digits[6] << endl;
				break;
			case 7:
				cout << digits[7] << endl;
				break;
			case 8:
				cout << digits[8] << endl;
				break;
			case 9:
				cout << digits[9] << endl;
				break;
			case 10:
				cout << digits[10] << endl;
				break;
			}
		}
		
	}
	return 0;
}