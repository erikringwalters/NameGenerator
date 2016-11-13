#include "NameGenerator.h"
//Definition of default constructor
NameGenerator::NameGenerator()
{
	Sex = 0;
	Race = 0;
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
//Definition of writeName
void NameGenerator::writeName()
{
	srand(time(NULL));
	string tempName = "";
	char firstLetter = rand() % 26 + 65;//initialized because
	char charTemp;//for individual characters
	string stringTemp = "";//for several characters
	enum gender{MALE, FEMALE, OTHER};
	switch (MALE)//defaults to male
	{
	case MALE:
		tempName += firstLetter;//builds a name through piecing random characters together
		tempName += getRandomVowel();
		break;
	case FEMALE:
		tempName += firstLetter;
		break;
	case OTHER:
		tempName += firstLetter;
	}
	Name = tempName;
}
//65 - 90 is capital A - Z.
//97 - 122 is lowercase a - z.
//Definition of display()
void NameGenerator::display()
{
	cout << Name << endl;
}
