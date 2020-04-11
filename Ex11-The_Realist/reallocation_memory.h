
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
int get_numbers_till_initiate_size(int** array_pointer);
int increase_array_size_according_to_user(int size_of_array,
											int** array_pointer,
											int index_in_array);
int get_numbers_from_user_to_array(int** array_pointer);
