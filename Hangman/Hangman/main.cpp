#include <iostream>
#include <string>

using namespace std;

// header file info
bool validHangmanCharacter(char);

bool puzzleContainsLetter(string puzzle, char letter)
{
	// Check puzzle for existence of a letter
	for (char c : puzzle)
		if (validHangmanCharacter(letter) && (c == letter || c+0x20 == letter))
			return true;
	return false;
}

// cpp source file info
bool validHangmanCharacter(char letter)
{
	if ((letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z'))
		return true;
	return false;
}

char toLower(char input)
{
	return 'a';
}

int main()
{
	string puzzle = "Your father smelt of elderberries.";
	//string puzzle = " ";

	bool myBool = puzzleContainsLetter(puzzle, 'E');

	cout << myBool << endl;

	string dummy;
	cin >> dummy;
}