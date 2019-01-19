#pragma once
#include <iostream>


class AverageCalculator {

public:
	AverageCalculator();

private: 
	float* nums;
	float average(float *nums, int size); 
	int userInputSize();
	void userInputNumbers(int size);

};

