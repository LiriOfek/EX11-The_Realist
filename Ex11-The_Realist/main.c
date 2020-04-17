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
#include "average_and_closest_number_to_it.h"

#define STRING_PRINT_AVERAGE ("The average is: %f\n")
#define STRING_PRINT_CLOSEST_ELEMENT_TO_AVERAGE ("The closest number to the average is: %d\n")

int* print_average_and_closest_number_to_it(int** array_pointer, 
											int number_of_elements) {
	/********************************************************\
	* Function name - print_average_and_closest_number
	*
	* Function Purpose - find the average and the closest number to average,
	*					 and print them
	*
	* Parameters - IN int** array_pointer - the pointer to pointer to the array
	*			    that contain the numbers from the user
	*			   IN int number_of_elements - the number of elements in array
	*
	* Return Value - the pointer to the array of numbers
	*
	* Side Effects - this function has no sides effects
	*
	* Semantics - this function call to functions that calculate the average 
	*			  and the closest number to the average of the numbers from user
	*
	* Author - Liri
	\********************************************************/
	float average = INITIAL_INDEX;
	int closest_element = INITIAL_INDEX;
	int index = 0;

	/*print the average of the numbers in array*/
	average = average_of_numbers_in_array(*array_pointer,
											number_of_elements);
	printf(STRING_PRINT_AVERAGE,
						average);

	/*print the closest element to the average*/
	closest_element = closest_element_to_average(*array_pointer,
													number_of_elements,
													average);
	printf(STRING_PRINT_CLOSEST_ELEMENT_TO_AVERAGE,
				closest_element);

	return *array_pointer;
}

int main() {
	/********************************************************\
	* Function name - main
	*
	* Function Purpose - allocate memory for pointer array,
	*					 get numbers from user to the array, calculate the
	*					 average of the numbers and the closest element to average
	*
	* Parameters - no Input/Output parameters
	*
	* Return Value - if allocation of memory failed - FAILURE
	*				 otherwise - SUCCESS
	*
	* Side Effects - this function allocate memory in order to save
	*				 the numbers from user and free the memory in
	*				 the end of the running
	*
	* Semantics - this function allocate memory for array of numbers,
	*			  call function that get numbers from user, calculate the
	*			  average and find the closest element to the average,
	*			  and in the end free memory allocation
	*
	* Author - Liri
	\********************************************************/
	int *array;
	int number_of_elements = INITIAL_INDEX;

	array = (int*)calloc(INITIAL_SIZE_OF_ARRAY, sizeof(int));
	if (false == check_if_memory_allocation_succeed(array))
	{
		return FAILURE;
	}

	number_of_elements = get_numbers_from_user_to_array(&array);
	if (FAILURE == number_of_elements)
	{
		return FAILURE;
	}

	array = print_average_and_closest_number_to_it(&array, number_of_elements);

	free(array);
	return SUCCESS;
}