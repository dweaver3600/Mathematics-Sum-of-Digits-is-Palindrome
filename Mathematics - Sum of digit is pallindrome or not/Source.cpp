// Prompt

//Given a number N.Find if the digit sum(or sum of digits) of N is a Palindrome number or not.
//Note:A Palindrome number is a number which stays the same when reversed.Example - 121, 131, 7 etc


#include <iostream>
#include <string>


#define PAUSE std::cout << "\n\n"; system("pause");


int main() {

	std::string N;

	std::cin >> N;

	int sum_of_string_ints = 0;

	for (auto it = N.begin(); it != N.end(); it++) {
		sum_of_string_ints += *it - '0';
	}

	std::string possible_palindrome = std::to_string(sum_of_string_ints);
	bool is_palindrome = true;

	if (possible_palindrome.size() == 1) {
		// do nothing
	}
	else if (possible_palindrome.size() == 2) {
		if (possible_palindrome[0] != possible_palindrome[1]) {
			is_palindrome = false;
		}
	}
	else {
		int it = 0;
		int rit = possible_palindrome.size();
		
		while (it < rit) {
			if (possible_palindrome[it] != possible_palindrome[rit]) {
				is_palindrome = false;
				break;
			}

			it++;
			rit++;
		}
	}

	std::cout << "Added Digits: " << possible_palindrome << "\n";
	std::cout << "T/F: " << is_palindrome;

	PAUSE;
	return 0;
}