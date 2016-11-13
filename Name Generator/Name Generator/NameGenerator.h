#pragma once
#include <iostream>
#include <string>
#include <time.h>
using namespace std;
class NameGenerator
{
public:
	NameGenerator();
	void getRace(int r);
	void getSex(int s);
	void writeGenericName(int size);
	char randomVowel();
	char randomConsonant();
	char randomLowercase();
	char organizeCheck();
	char getLastLetter();
	void displayLastLetter();
	void displayName();
private:
	int Race;//decides style of name(orc, dragon, etc.)
	int Sex;//decides whether name is more masculine/feminine/other
	int Size;//number of characters in name
	int DesiredSize;
	char Consonant[21] = {'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z'};
	char Vowel[5] = { 'a','e','i','o','u' };
	
	string Name;
};