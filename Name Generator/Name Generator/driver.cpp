#include "NameGenerator.h"
void main()
{
	srand(time(NULL));
	char testLetter;
	NameGenerator b;
	int sex = 0;
	int race;
	int sizeD = rand() % 8 + 3;
	b.writeGenericName(sizeD);
	b.displayName();
}