#include <iostream>
#include "Header.h"

float average(float nums[], int size);


int main()
{
	int size = 1;
	float total = 0;

	//Usser input
	std::cout << "How many numbers would you like to enter?" << std::endl;
	std::cin >> size;

	//Creates array for all of the numbers
	float *nums = new float [size];

	//Puts each number in the array as it is entered
	for (int index = 0; index < size; index++)
	{
		std::cout << "Number: ";
		std::cin >> nums[index];
	}
	//Calculates the average of the data set by calling the average method in the header class
	std::cout << "Average of the data: " << average(nums, size) << std::endl;
	std::cin >> size;//just so the file does not close
	
	
}