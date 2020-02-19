#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int	main()
{
	string answer;
	string shuffled_word;
	string user_input;

	cout << "PLEASE ENTER A WORD\n";
	cin >> answer;
	cout << "\n";

	shuffled_word = answer;
	random_shuffle(shuffled_word.begin(), shuffled_word.end());

	while(user_input != answer)
	{
		cout << "GUESS THE WORD ! (Hint :" << shuffled_word << ")\n";
		cin >> user_input;
		
		if(user_input == answer)
			cout << "GOOD JOB !\n";
		else
			cout << "TRY AGAIN\n";
	}

	return 0;
}