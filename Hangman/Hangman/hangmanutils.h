#pragma once

#include <string>

using namespace std;

// header file info
char toLower(const char& input);
bool validHangmanCharacter(char);
bool puzzleContainsLetter(string puzzle, char letter);

bool puzzleContainsLetter(string puzzle, char letter)
{
	// Check puzzle for existence of a letter
	for (char c : puzzle)
		if (validHangmanCharacter(letter) && (c == letter || c == toLower(letter)))
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

char toLower(const char& input)
{
	if (input >= 'A' && input <= 'Z')
		return input + 32;
	return input;
}