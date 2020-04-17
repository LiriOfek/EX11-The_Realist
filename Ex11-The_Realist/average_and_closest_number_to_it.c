/********************************************************\
File Name: average_and_closest_number_to_it.c
Author: Liri (17/4/2020)
Purpose: This file contain functions that calculate the average of the
		 numbers of the array, andcalculate the closest number to the 
		 average
\********************************************************/

#include "average_and_closest_number_to_it.h"

float average_of_numbers_in_array(int* array,
									int number_of_elements) {
	int summary = INITIAL_INDEX;
	float average = INITIAL_INDEX;

	for (int index = INITIAL_INDEX; index < number_of_elements; ++index)
	{
		summary += *(array + index);
	}
	average = (float)summary / number_of_elements;
	return average;
}

int closest_element_to_average(int* array,
								int number_of_elements,
								float average) {
	float shortest_distance = INITIAL_INDEX;
	float current_distance = INITIAL_INDEX;
	int closest_element = INITIAL_INDEX;

	/*calculate distance by the absolute value of the difference
		between element and the average*/
	shortest_distance = fabsf(*(array)-average);
	closest_element = *(array);

	for (int index = INITIAL_INDEX; index < number_of_elements; ++index)
	{
		current_distance = fabsf(*(array + index) - average);
		if (current_distance < shortest_distance)
		{
			/*current element is closer than the older*/
			shortest_distance = current_distance;
			closest_element = *(array + index);
		}
	}
	return closest_element;
}
