#pragma once
#include <iostream>
#include <string>
#include <time.h>
using namespace std;
class NameGenerator
{
public:
	NameGenerator();
	/*NameGenerator(int race);
	NameGenerator(int sex);
	NameGenerator(int sex, int race);*/
	void getRace(int r);
	void getSex(int s);
private:
	int Race;
	int Sex;
	string Name;
};