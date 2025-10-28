#include "Vector2.h"

int main()
{
	Vector2 testVectorOne = {3.0f, 4.0f};
	Vector2 testVectorTwo = { 3.0f, 4.0f };
	Vector2 testVectorThree = { 3.1f, 4.0f };

	if (testVectorOne == testVectorTwo)
	{
		std::cout << testVectorOne << " is equal to " << testVectorTwo << "\n";
	}
	else
	{
		std::cout << testVectorOne << " is not equal to " << testVectorTwo << "\n";
	}
	if (testVectorOne == testVectorThree)
	{
		std::cout << testVectorOne << " is equal to " << testVectorThree << "\n";
	}
	else
	{
		std::cout << testVectorOne << " is not equal to " << testVectorThree << "\n";
	}
	if (testVectorOne == (double)testVectorThree)
	{
		std::cout << testVectorOne << " is equal to " << testVectorThree << "\n";
	}
	else
	{
		std::cout << testVectorOne << " is not equal to " << testVectorThree << "\n";
	}

	std::cin.get();
	return 0;
}