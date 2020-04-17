/********************************************************\
File Name: average_and_closest_number_to_it.h
Author: Liri (17/4/2020)
Purpose: This header file contain declaration of functions that calculate
		 the average of thecnumbers of the array, andcalculate the closest 
		 number to the average
\********************************************************/

#pragma once

#include "reallocation_memory.h"

float average_of_numbers_in_array(int* array,
									int number_of_elements);
/********************************************************\
* Function name - average_of_numbers_in_array
*
* Function Purpose - calculate the average of the numbers in array
*
* Parameters - IN int* array - the array that contain the numbers
*								from the user
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

int closest_element_to_average(int* array,
								int number_of_elements,
								float average);
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
