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
	void writeName();
	char getRandomVowel();
	void display();
private:
	int Race;//decides style of name(orc, dragon, etc.)
	int Sex;//decides whether name is more masculine/feminine/other
	string Name;
};