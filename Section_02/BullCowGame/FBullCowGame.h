#pragma once
#include <string>

using FString = std::string;
using int32 = int;

// all values, initialised to zero
struct BullCowCount
{
	int32 Bulls = 0;
	int32 Cows = 0;
};

class FBullCowGame 
{
public:
	FBullCowGame(); // constructor

	int32 GetMaxTries() const;
	int32 GetCurrentTry() const;
	bool IsGameWon() const; 

	void Reset(); // TODO make a richer return value
	bool CheckGuessValidity(FString); // TODO make a richer return value.
   	BullCowCount SubmitGuess(FString);


	// ^^ Please ignore
private:
	// see constructor for initialisation
	int MyCurrentTry;
	int32 MyMaxTries;
	FString MyHiddenWord;
};