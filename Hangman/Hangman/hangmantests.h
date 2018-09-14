#pragma once

#include <cassert>
#include "hangmanutils.h"

bool puzzleContainsLetterTest()
{
	bool bPassing = true;

	// bPassing = bPassing & puzzleContainsLetter("A", 'a');
	// a += b; is equivalent to a = a+b;
	assert(bPassing &= puzzleContainsLetter("A", 'a'));
	assert(bPassing &= puzzleContainsLetter("a", 'a'));
	assert(bPassing &= puzzleContainsLetter("A", 'A'));
	assert(bPassing &= puzzleContainsLetter("a", 'A'));

	return bPassing;
}