/*
https://www.codewars.com/kata/56fcfad9c7e1fa2472000034/train/cpp
The number n is Evil if it has an even number of 1's in its binary representation.
The first few Evil numbers : 3, 5, 6, 9, 10, 12, 15, 17, 18, 20
The number n is Odious if it has an odd number of 1's in its binary representation.
The first few Odious numbers : 1, 2, 4, 7, 8, 11, 13, 14, 16, 19
You have to write a function that determine if a number is Evil of Odious, function should return "It's Evil!" in case of evil number and "It's Odious!" in case of odious number.
*/

#include <iostream>
#include <bitset>
#include <string>

std::string evil(int n)
{
	int counter = 0;
	std::string binary = std::bitset<8>(n).to_string(); // magick !
	for (int i = 0; i < binary.length(); i++) {
		if (binary[i] == '1') {
			counter += 1;
		}
	}
	if (counter % 2 == 0) {
		return "It's Evil!";
	}
	else {
		return "It's Odious!";
	}

}

int main() {
	using std::cout;

	cout << evil(1);

	return 0;
}