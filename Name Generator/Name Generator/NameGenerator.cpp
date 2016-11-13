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
void NameGenerator::getSex(int s)
{
	Sex = s;
}
string writeName(int r, int s)
{
	string tempName = "";
	char firstLetter = rand() % 65 + 26;
	char charTemp;//for individual characters
	string stringTemp = "";//for several characters
	switch (0)
	{
	case 1:
		tempName += firstLetter;

	}
}
//65 - 90 is capital A - Z.
//97 - 122 is lowercase a - z.
