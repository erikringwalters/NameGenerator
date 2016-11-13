#include "NameGenerator.h"
void main()
{
	srand(time(NULL));
	char testLetter;
	//for (int i = 0; i < 10; i++)
	//{
	//	testLetter = rand() % 26 + 65;//testing random letter ranges.
	//	cout << testLetter << endl;
	//}
	NameGenerator a;
	int sex = 0;
	int race;
	cout << "Please choose your sex: (1. Male 2. Female) \n";
	cin >> sex;
	a.getSex(sex);
	a.writeName();
	a.display();
}