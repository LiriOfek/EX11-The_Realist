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

#define STRING_PRINT_AVERAGE ("The average is: %f\n")
#define STRING_PRINT_CLOSEST_ELEMENT_TO_AVERAGE ("The closest number to the average is: %d\n")

float average_of_numbers_in_array(int* array_pointer,
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

int closest_element_to_average(int* array_pointer,
	int number_of_elements,
	float average) {
	/********************************************************\
	* Function name - closest_element_to_average
	*
	* Function Purpose - find the closest element to the average in array
	*
	* Parameters - IN int* array_pointe - the pointer to the array
	*				that contain the numbers from the user
	*			   IN int number_of_elements - the number of the elements
	*				in the array
	*			   IN float average - the average of the numbers in array
	*			   OUT int closest element in array to the average
	*
	* Return Value - the closest element in array to the average
	*
	* Side Effects - this function has no side effects
	*
	* Semantics - this function find the closest element in array
	*				to the average, such that if there are two numbers
	*				in equal distance from average, than the first that the
	*				user typed get priority
	*
	* Author - Liri
	\********************************************************/
	float shortest_distance = INITIAL_INDEX;
	float current_distance = INITIAL_INDEX;
	int closest_element = INITIAL_INDEX;
	int index = INITIAL_INDEX;

	/*calculate distance by the absolute value of the difference
	between element and the average*/
	shortest_distance = fabsf(*(array_pointer)-average);
	closest_element = *(array_pointer);

	for (index = INITIAL_INDEX; index < number_of_elements; ++index)
	{
		current_distance = fabsf(*(array_pointer + index) - average);
		if (current_distance < shortest_distance)
		{
			/*current element is closer than the older*/
			shortest_distance = current_distance;
			closest_element = *(array_pointer + index);
		}
	}
	return closest_element;
}

int* print_average_and_closest_number_to_it(int* array_pointer) {
	/********************************************************\
	* Function name - print_average_and_closest_number_to_it
	*
	* Function Purpose - get the number of elements from user,
	*					 and the elements, save them to array,
	*						calculate the average of the array,
	*						and find the closest element in array
	*						to the average
	*
	* Parameters - INOUT int* array_pointe - the pointer to the array
	*				that contain the numbers from the user
	*			   IN int number_of_elements - the number of the elements
	*				in the array
	*
	* Return Value - the pointer to the array that contain
	*				 the numbers from the user
	*
	* Side Effects - this function change the array_pointer,
	*				 such that it add to the array the numbers from user
	*
	* Semantics - this function call functions that
	*			  get number of elements from user,
	*			  get the elements, calculate the
	*			  average and find the closest element to the average
	*
	* Author - Liri
	\********************************************************/
	float average = INITIAL_INDEX;
	int closest_element = INITIAL_INDEX;
	int number_of_elements = 0;


	/*fill the array with the numbers from user*/
	number_of_elements = get_numbers_from_user_to_array_1(array_pointer);

	if (FAILURE == number_of_elements)
	{
		return NULL;
	}

	/*print the average of the numbers in array*/
	average = average_of_numbers_in_array1(array_pointer,
		number_of_elements);
	printf(STRING_PRINT_AVERAGE,
		average);

	/*print the closest element to the average*/
	closest_element = closest_element_to_average1(array_pointer,
		number_of_elements,
		average);
	printf(STRING_PRINT_CLOSEST_ELEMENT_TO_AVERAGE,
		closest_element);

	return array_pointer;
}
