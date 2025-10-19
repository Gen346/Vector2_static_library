#include "Vector2.h"

int main()
{
	Vector2 testVector = { 2.543f, 4.675f };

	Vector2* memoryLeak = new Vector2;

	memoryLeak->x = 34.22f;
	memoryLeak->y = 234.45f;

	std::cout << *memoryLeak << std::endl;

	std::cout << testVector << std::endl;

	testVector.normalize();

	std::cout << testVector << std::endl;

	std::string std = "";

	delete memoryLeak;

	memoryLeak = 0;

	std::cin >> std;
}