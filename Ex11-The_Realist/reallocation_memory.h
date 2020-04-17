#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

#define INITIAL_SIZE_OF_ARRAY (10)
#define END_OF_ELEMENTS (-1)
#define INITIAL_INDEX (0)
#define ERROR_MEMORY_ALLOCATION_FAILED ("Error! memory allocation failed.\n")

enum return_values { FAILURE, SUCCESS };

bool check_if_memory_allocation_succeed(int* array);
/********************************************************\
* Function name - check_if_memory_allocation_succeed
*
* Function Purpose - check if memory allocation succeed
*
* Parameters - IN int* array - the array that contain the numbers
*								from the user
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

int get_numbers_till_initiate_size(int** array_pointer);
/********************************************************\
* Function name - get_numbers_till_initiate_size
*
* Function Purpose - get numbers from user and fill the array with
*					 numbers till fill the array with INITIAL_SIZE_OF_ARRAY
*					 elements
*
* Parameters - INOUT int** array_pointer - the pointer to the pointer to
*				the array that contain the numbers from the user
*			   OUT int next index in array
*
* Return Value - the index to the next element in array_pointer
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

int increase_array_size_according_to_user(int size_of_array,
											int** array_pointer,
											int index_in_array);
/********************************************************\
* Function name - increase_array_size_according_to_user
*
* Function Purpose - get numbers from user and fill the array with
*					 numbers, according to the index, increase the
*					 size of the array according to the numbers that
*					 received from user
*
* Parameters -  IN int size_of_array - the size of the array
*				INOUT int** array_pointer - the pointer to the array
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

int get_numbers_from_user_to_array(int** array_pointer);
/********************************************************\
* Function name - get_numbers_from_user_to_array
*
* Function Purpose - get numbers from user and fill the array with
*					 numbers, till receive INITIAL_SIZE_OF_ARRAY elements,
*					 and if receive more elements - increase the
*					 size of the array according to the numbers that
*					 received from user
*
* Parameters -  INOUT int** array_pointer - the pointer to the array
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
