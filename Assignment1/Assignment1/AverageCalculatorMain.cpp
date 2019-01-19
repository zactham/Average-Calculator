#include <iostream>
#include "AverageCalculator.h"


	
AverageCalculator::AverageCalculator()
			
	{
		int size = userInputSize();
		nums = new float [size];
		userInputNumbers(size);
		

		//Calculates the average of the data set by calling the average method in the header class
		std::cout << "Average of the data: " << average(nums, size) << std::endl;
		int temp;
		delete [] nums;
		std::cin >> temp;//just so the file does not close
	}

	float AverageCalculator::average(float *nums, int size)
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



	int AverageCalculator::userInputSize()
	{
		//Usser input
		std::cout << "How many numbers would you like to enter?" << std::endl;
		int size = 0;
		std::cin >> size;

		return size;
	}


	void AverageCalculator::userInputNumbers(int size)
	{
		
		
		//Puts each number in the array as it is entered
		for (int index = 0; index < size; index++)
		{
			std::cout << "Number: ";
			std::cin >> nums[index];
		}

	}
	