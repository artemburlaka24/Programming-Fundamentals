/**
 * Done by:
 * Student Name: Artem Burlaka
 * Student Group: 121
 * Lab 1.6
 */
#include <iostream>
#include <bitset>

int main()
{
	int A, count1 = 0, count2 = 0;
	std::cout << "Task 1" << std::endl;
	std::cout << "Write a number:" << std::endl;
	std::cin >> A;
	for (int i = 0; i <= A; i++)
	{
		if (int I = i % 2 == 0)
		{
			std::cout << I;
			count2 += 1;
		}
		else
		{
			std::cout << I;
			count1 += 1;
		}
	}
	if (count1 > count2)
	{
		std::cout << "There's more zeros than ones" << std::endl;
	}
	else if (count2 > count1)
	{
		std::cout << "There's more ones than zeros" << std::endl;
	}
	else
	{
		std::cout << "There's the same amount of ones and zeros" << std::endl;
	}
	int binary1 = 0, binary2 = 0;
	std::cout << "Task 2" << std::endl;
	std::cout << "Write a number 1 in binary:" << std::endl;
	std::cin >> binary1;
	std::cout << "Write a number 2 in binary:" << std::endl;
	std::cin >> binary2;
	int result = binary1 ^ binary2;
	std::cout << std::bitset<8>(result) << std::endl;
}
