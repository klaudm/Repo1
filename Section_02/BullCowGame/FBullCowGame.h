#pragma once
#include <string>

using FString = std::string;
using int32 = int;

class FBullCowGame {
public:
	FBullCowGame(); // constructor

	int32 GetMaxTries() const;
	int32 GetCurrentTry() const;
	bool IsGameWon() const; 

	void Reset(); // TODO make a richer return value
	bool CheckGuessValidity(FString); // TODO make a richer return value
   // provide a method for counting bulls and cows and increasing turn #


	// ^^ Please ignore
private:
	// see constructor for initialisation
	int MyCurrentTry;
	int32 MyMaxTries;
};