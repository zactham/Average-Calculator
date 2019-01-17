#include <iostream>
#include "Header.h"

int size = 1;
float total = 0;

//Creates array for all of the numbers
float *nums = new float[size];


int main()
{
	userInput();
	//Calculates the average of the data set by calling the average method in the header class
	std::cout << "Average of the data: " << average(nums, size) << std::endl;
	std::cin >> size;//just so the file does not close
}

float average(float nums[], int size)
{
	float total = 0;
	//Runs through every number adding it to the total
	for (int index = 0; index < size; index++)
	{
		total += nums[index];
	}
	//Returns the average of the data: sum of the numbers divided by the amount of numbers
	return (total / size);
}

void userInput() 
{
	//Usser input
	std::cout << "How many numbers would you like to enter?" << std::endl;
	std::cin >> size;

	//Puts each number in the array as it is entered
	for (int index = 0; index < size; index++)
	{
		std::cout << "Number: ";
		std::cin >> nums[index];
	}



}