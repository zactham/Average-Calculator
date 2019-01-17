#include <iostream>

int average(int nums[]);

int main()
{
	int size = 1;
	double total = 0;
	double average = 0;
	std::cout << "How many numbers would you like to enter?" << std::endl;
	std::cin >> size;
	for (int index = 0; index < size; index++)
	{
		std::cout << "Number: ";
		int num = 0;
		std::cin >> num;
		total = total + num;
	}
	std::cout << "Calculating: ";
	average = total / size;
	std::cout << "Average of the data: " << average << std::endl;
	std::cin >> size;//just so the file does not close
	
}