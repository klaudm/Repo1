#pragma once
#include <string>

using FString = std::string;
using int32 = int;

// all values, initialised to zero
struct FBullCowCount
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
	int32 GetHiddenWordLength() const;

	bool IsGameWon() const; 
	bool CheckGuessValidity(FString) const; // TODO make a richer return value.

	void Reset(); // TODO make a richer return value
	FBullCowCount SubmitGuess(FString);


	// ^^ Please ignore
private:
	// see constructor for initialisation
	int MyCurrentTry;
	int32 MyMaxTries;
	FString MyHiddenWord;
};