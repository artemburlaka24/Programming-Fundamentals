#include <iostream>
/**
 * Done by:
 * Student Name: Artem Burlaka
 * Student Group: 121
 * Practice 1.4
 */


int main()
{
	int n, count = 0;
	double sum = 0;
	std::cout << "Task 1" << std::endl;
	std::cout << "Write a number" << std::endl;
	std::cin >> n;
	if (count == 0)
	{
		count++;
	}
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 != 0)
		{
			sum += i;
			count++;
		}
	}
	if (count > 0)
	{
		double average = sum / count;
		std::cout << average << std::endl;
	}
	else
	{
		std::cout << "There are no odd numbers" << std::endl;
	}
	int n2;
	float b1;
	double q;
	std::cout << "Task 2" << std::endl;
	std::cout << "How many numbers in a geometric progression?" << std::endl;
	std::cin >> n2;
	std::cout << "How much should they be multiplied?" << std::endl;
	std::cin >> q;
	std::cout << "Write the first number" << std::endl;
	std::cin >> b1;
	if (q != 0)
	{
		double S = (b1 * (1 - pow(q, n2))) / (1 - q);
		std::cout << S << std::endl;
	}
	else
	{
		std::cout << "Dont set it to zero" << std::endl;
	}
}