#include "NameGenerator.h"
//Definition of default constructor
NameGenerator::NameGenerator()
{
	Sex = 0;
	Race = 0;
	Size = 0;
	DesiredSize = 10;
}
//Definition of getRace(int r)
void NameGenerator::getRace(int r)
{
	Race = r;
}
//Definition of getSex(int s)
void NameGenerator::getSex(int s)
{
	Sex = s;
}
//Definition of getRandomVowel()
char NameGenerator::getRandomVowel()
{
	char vowel[5] = { 'a','e','i','o','u' };
	return vowel[rand() % 5];
}
//Definition of getRandomLowerCase
char NameGenerator::getRandomLowercase()
{
	char randomLowercase = rand() % 26 + 97;
	//97 - 122 is lowercase a - z.
	return randomLowercase;
}
//Definition of getLastLetter()
char NameGenerator::getLastLetter()
{
	return Name[Name.size()];
}
//Definition of checkConsonants
char NameGenerator::checkConsonants()
{
	char vowel[5] = { 'a','e','i','o','u' };
	bool LastIsVowel = false;
	bool secondLastIsVowel = false;
		
	for (int i = 0; i < 5; i++)
	{
		if (Name[Name.size()] == vowel[i])
		{//checks if last letter is a vowel ^
			LastIsVowel = true;
		}
		if (Name[Name.size() - 1] == vowel[i])
		{
			secondLastIsVowel = true;
		}
	}
	if (LastIsVowel && secondLastIsVowel)//if it sees that there is indeed a vowel 
		//amongst the last two letters, it'll return any letter, otherwise it'll return a vowel only.
	{
		return getRandomLowercase();
	}
	else
		return getRandomVowel();
}
//Definition of writeName
void NameGenerator::writeGenericName(int size)
{
	srand(time(NULL));
	string tempName = "";
	char firstLetter = rand() % 26 + 65;
	//65 - 90 is capital A - Z.
	

	char charTemp;//for individual characters
	string stringTemp = "";//for several characters
	enum gender{MALE, FEMALE, OTHER};
	
		Name += firstLetter;//builds a name by piecing random characters together
		Name += getRandomVowel();
		for (int i = 0; i <= DesiredSize/2; i++)
		{
			Name += checkConsonants();
		}
	
}

//Definition of display()
void NameGenerator::display()
{
	cout << Name << endl;
}

