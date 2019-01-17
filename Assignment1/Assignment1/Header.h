#pragma once

int average(int nums[])
{
	int size = nums.size();
	int total = 0;
	for (int index = 0; index < size; index++) 
	{
		total += nums[index];
	}
	return (total / size);
}
