#include "data.h"

#ifndef __STACK_H__
#define __STACK_H__

typedef struct __stack_t {
	int top;
	_data_t * data;
} _stack_t;

_stack_t stack;

#define MAX_STACK_SIZE 10
#define MIN_STACK_SIZE 0

_stack_t * stack_initialization();
int get_data(_stack_t * s);
int push(_stack_t * s, _data_t data);
_data_t * pop(_stack_t * s);
void print_stack(_stack_t * s);
int is_full_stack(_stack_t * s);
int is_empty_stack(_stack_t * s);

#endif