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
	c.writeGenericName(sizeD);
	c.display();
	g.writeGenericName(sizeD);
	g.display();
	for (int i = 0; i < 10; i++)
	{
		srand(time(NULL));
		a[i].writeGenericName(sizeD);
		a[i].display();
	}
	
}