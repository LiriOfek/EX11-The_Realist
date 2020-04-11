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

int increase_array_size_according_to_user(int size_of_array,
	int* array_pointer,
	int index_in_array) {
	/********************************************************\
	* Function name - increase_array_size_according_to_user
	*
	* Function Purpose - get numbers from user and fill the array with
	*					 numbers, according to the index, increase the
	*					 size of the array according to the numbers that
	*					 received from user
	*
	* Parameters -  IN int size_of_array - the size of the array
	*				INOUT int* array_pointer - the pointer to the array
	*				that contain the numbers from the user
	*				INOUT int index_in_array - the index in the array
	*
	* Return Value - the index of the next element in array
	*
	* Side Effects - this function change the array_pointer,
	*				 such that it add to the array the numbers from user,
	*				 and increase the size of the array according to the
	*				 numbers from user
	*
	* Semantics - this function get numbers from user and fill the array with
	*			  numbers, according to the index, increase the size of the
	*			  array according to the numbers that received from user
	*			  elements
	*
	* Author - Liri
	\********************************************************/
	while (true) {
		++size_of_array;
		array_pointer = (int*)realloc(array_pointer, size_of_array * sizeof(int));
		if (false == check_if_memory_allocation_succeed(array_pointer)) {
			return FAILURE;
		}
		scanf_s("%d", array_pointer + index_in_array);
		if (END_OF_ELEMENTS == *(array_pointer + index_in_array))
		{
			break;
		}
		++index_in_array;
	}
	return index_in_array;
}

int get_numbers_from_user_to_array(int* array_pointer) {
	/********************************************************\
	* Function name - get_numbers_from_user_to_array
	*
	* Function Purpose - get numbers from user and fill the array with
	*					 numbers, till receive INITIAL_SIZE_OF_ARRAY elements,
	*					 and if receive more elements - increase the
	*					 size of the array according to the numbers that
	*					 received from user
	*
	* Parameters -  INOUT int* int* array_pointer - the pointer to the array
	*				that contain the numbers from the user
	*				INOUT int size of array
	*
	* Return Value - the size of the array
	*
	* Side Effects - this function change the array_pointer,
	*				 such that it fill the array with numbers from user,
	*				 till receive INITIAL_SIZE_OF_ARRAY elements,
	*			     and if receive more elements - increase the
	*			     size of the array according to the numbers that
	*				 received from user
	*
	* Semantics - this function get numbers from user and fill the array with
	*			  numbers, till receive INITIAL_SIZE_OF_ARRAY elements,
	*			  and if receive more elements - increase the
	*			  size of the array according to the numbers that
	*			  received from user
	*
	* Author - Liri
	\********************************************************/
	int size_of_array = INITIAL_SIZE_OF_ARRAY;
	int index_in_array = 0;

	printf("Enter elements:\n");
	index_in_array = get_numbers_till_initiate_size(array_pointer);

	if (INITIAL_SIZE_OF_ARRAY == index_in_array)
	{
		index_in_array = increase_array_size_according_to_user(size_of_array,
			array_pointer,
			index_in_array);
		if (FAILURE == index_in_array)
		{
			return FAILURE;
		}

	}

	size_of_array = index_in_array;
	return size_of_array;
}