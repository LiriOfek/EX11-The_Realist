/********************************************************\
File Name: main.c
Author: Liri (11/4/2020)
Purpose: This file allocate initial memory for array, get numbers from user
		 and fill the array, if the user type more elements than what that
		 allocate than increase the memory allocation for the array
	     the program get numbers from user, till the user type END_OF_ELEMENTS
\********************************************************/

#include "reallocation_memory.h"

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

int get_numbers_till_initiate_size(int *array_pointer) {
	/********************************************************\
	* Function name - get_numbers_till_initiate_size
	*
	* Function Purpose - get numbers from user and fill the array with
	*					 numbers till fill the array with INITIAL_SIZE_OF_ARRAY
	*					 elements
	*
	* Parameters - INOUT int* array_pointe - the pointer to the array
	*				that contain the numbers from the user
	*			   OUT int next index in array
	*
	* Return Value - the pointer to the array that contain
	*				 the numbers from the array_pointer
	*
	* Side Effects - this function change the array_pointer,
	*				 such that it add to the array the numbers from user
	*				 till fill the array with INITIAL_SIZE_OF_ARRAY
	*			     elements
	*
	* Semantics - this function get numbers from user and fill the array with
	*			  numbers till fill the array with INITIAL_SIZE_OF_ARRAY
	*			  elements
	*
	* Author - Liri
	\********************************************************/
	int index_in_array = 0;
	while (index_in_array < INITIAL_SIZE_OF_ARRAY)
	{
		scanf_s("%d", array_pointer + index_in_array);
		if (END_OF_ELEMENTS == *(array_pointer + index_in_array))
		{
			break;
		}
		++index_in_array;
	}
	return index_in_array;
}