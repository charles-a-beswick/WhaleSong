#include <iostream>
#include <string>
#include <vector>

int main() {

	std::string input;

	std::cout << "Type a word that you would like to translate into whale song: ";
	std::cin >> input;

	std::vector<char> vowels = { 'a','e','i','o','u' };

	std::vector<char> result;

	//go through input vector looking for vowels

	for (int i = 0; i < input.size(); i++) {

		//for entries in input, compare to entries in vowels
		for (int j = 0; j < vowels.size(); j++) {

			//if entry in input is also an entry in vowels, add it to result
			if (vowels[j] == input[i]) {

				result.push_back(input[i]);

			}
		}

		if (input[i] == 'e' || input[i] == 'u') {
			result.push_back(input[i]);
		}

	}

	//output result
	for (int k = 0; k < result.size(); k++) {
		std::cout << result[k];
	}
	std::cout << std::endl;

}