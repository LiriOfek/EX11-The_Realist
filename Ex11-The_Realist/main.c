/********************************************************\
File Name: main.c
Author: Liri (11/4/2020)
Purpose: This file allocate initial memory for array, get numbers from user 
		 and fill the array, if the user type more elements than what that 
		 allocate than increase the memory allocation for the array
		 the program get numbers from user, till the user type END_OF_ELEMENTS
		 the program calculate the average of the array and find the closest
		 element to the average
\********************************************************/

#include "reallocation_memory.h"

float average_of_numbers_in_array1(int* array_pointer,
	int number_of_elements) {
	/********************************************************\
	* Function name - average_of_numbers_in_array
	*
	* Function Purpose - calculate the average of the numbers in array
	*
	* Parameters - IN int* array_pointer - the pointer to the array
	*				that contain the numbers from the user
	*			   IN int number_of_elements - the number of the elements
	*				in the array
	*			   OUT float average of numbers in array
	*
	* Return Value - the average of the numbers that in the array
	*
	* Side Effects - this function has no side effects
	*
	* Semantics - this function calculate the average of the numbers
	*			  that in the array
	*
	* Author - Liri
	\********************************************************/
	int index = INITIAL_INDEX;
	int summary = INITIAL_INDEX;
	float average = INITIAL_INDEX;

	for (index = INITIAL_INDEX; index < number_of_elements; ++index)
	{
		summary += *(array_pointer + index);
	}
	average = (float)summary / number_of_elements;
	return average;
}


