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
//Definition of randomVowel()
char NameGenerator::randomVowel()
{
	
	return Vowel[rand() % 5];
}
//Definition of randomConsonant();
char NameGenerator::randomConsonant()
{
	return Consonant[rand() % 21];
	//97 - 122 is lowercase a - z.
}
//Definition of randomLowercase
char NameGenerator::randomLowercase()
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
char NameGenerator::organizeCheck()
{
	
	bool LastIsVowel = false;
	bool secondLastIsVowel = false;
		
	for (int i = 0; i < 5; i++)
	{
		if (Name[Name.size() - 1] == Vowel[i])
		{//checks if last letter is a vowel ^
			LastIsVowel = true;
		}
		if (Name[Name.size() - 2] == Vowel[i])
		{
			secondLastIsVowel = true;
		}
	}
	if (LastIsVowel == false && secondLastIsVowel == false)
	{
		return randomVowel();
	}
	if (Name[Name.size() - 1] == 'q')//should have 'u' after 'q'
	{
		return 'u';
	}
	if ((Name[Name.size() - 1]) == 'x')//shouldn't have consonant successing 'x'
	{
		return randomVowel();
	}
	else
		return randomLowercase();
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
		Name += randomVowel();
		for (int i = 0; i <= DesiredSize/2; i++)
		{
			Name += organizeCheck();
		}
	
}
//Definition of displayLastLetter
void NameGenerator::displayLastLetter()
{
	cout << Name[Name.size() - 1] << endl;
}
//Definition of displayName()
void NameGenerator::displayName()
{
	cout << Name << endl;
}

