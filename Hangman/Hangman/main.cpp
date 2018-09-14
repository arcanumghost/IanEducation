#include <iostream>
#include <string>
#include "debugutils.h"
#include "hangmantests.h"

using namespace std;

int main()
{
	string puzzle = "Your father smelt of elderberries.";

	bool testFunc = puzzleContainsLetterTest();

	bool myBool = puzzleContainsLetter(puzzle, 'E');

	cout << myBool << endl;

	for (char c : puzzle)
		cout << toLower(c);
	cout << endl;

	printAddress(&puzzle);

	string dummy;
	cin >> dummy;
}