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

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

#define INITIAL_SIZE_OF_ARRAY (10)
#define END_OF_ELEMENTS (-1)
#define INITIAL_INDEX (0)
#define ERROR_MEMORY_ALLOCATION_FAILED ("Error! memory allocation failed.\n")

enum return_values { FAILURE, SUCCESS };

bool check_if_memory_allocation_succeed(int* array_pointer) {
	/********************************************************\
	* Function name - check_if_memory_allocation_succeed
	*
	* Function Purpose - check if memory allocation succeed
	*
	* Parameters - IN int* array_pointer - the pointer to the array
	*				that contain the numbers from the user
	*			   OUT - if the memory allocation succeed - return true
	*				     otherwise - return false
	*
	* Return Value - true - if memory allocation succeed
	*				 false - otherwise
	*
	* Side Effects - this function has no side effects
	*
	* Semantics - this function check if memory allocation succeed
	*
	* Author - Liri
	\********************************************************/
	if (NULL == array_pointer) {
		printf(ERROR_MEMORY_ALLOCATION_FAILED);
		return false;
	}
	else {
		return true;
	}
}