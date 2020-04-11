#define reallocarion_memory_h

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

#define INITIAL_SIZE_OF_ARRAY (10)
#define END_OF_ELEMENTS (-1)
#define INITIAL_INDEX (0)
#define ERROR_MEMORY_ALLOCATION_FAILED ("Error! memory allocation failed.\n")

bool check_if_memory_allocation_succeed(int* array_pointer);
int get_numbers_till_initiate_size(int *array_pointer);

enum return_values { FAILURE, SUCCESS };