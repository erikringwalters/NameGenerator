#include "NameGenerator.h"
void main()
{
	srand(time(NULL));
	char testLetter;

	NameGenerator a[10], b, c, d, e, f;
	NameGenerator g;
	int sex = 0;
	int race;
	int sizeD = rand() % 5 + 10;
	b.writeGenericName(sizeD);
	b.display();

	
}