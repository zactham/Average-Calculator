#pragma once

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
