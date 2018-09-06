#include <stdio.h>
#include <stdbool.h>
#include "stack.h"

_stack_t * stack_initialization() {
	_stack_t * s = (_stack_t *)malloc(sizeof(_stack_t *));
	if (!s) {
		fputs("Stack allocation is failed", stderr);
	}
	
	s->data = (_data_t *)malloc(sizeof(_data_t *) * MAX_STACK_SIZE);


	if (!s->data) {
		fputs("Stack data allocation is failed", stderr);
	}


	s->top = 0;

	return s;
}

int get_data(_stack_t * s) {
	_data_t temp;
	printf("Input a number you want to insert in the stack\n");
	scanf("%d", &temp.num);
/*	if (push(s, temp) == 1) {
		return 1;
	}
	else
		return -1;
*/
	return push(s, temp);
	
}

int push(_stack_t * s, _data_t data) {
	if (is_full_stack(s)) {
		return -1;
	}


	s->data[s->top] = data;
	s->top++;

	return 1;
}

_data_t * pop(_stack_t * s) {
	_data_t * temp = NULL;

	if (is_empty_stack(s)) {
		return NULL;
	}

	temp = s->data + s->top - 1;

	s->top--;

	return temp;
}

void print_stack(_stack_t * s) {
	if (is_empty_stack(s)) {
		printf("This stack is empty\n");
	}

	for (int i = 0; i < s->top; i++) {
		printf("Stack : %d = %d\n", i, s->data->num);
	}
}

int is_full_stack(_stack_t * s) {
	if (s->top >= MAX_STACK_SIZE) {
		fputs("Full stack", stderr);
		return true;
	}
	else {
		return false;
	}
}

int is_empty_stack(_stack_t * s) {
	if (s->top < MIN_STACK_SIZE) {
		fputs("Empty stack", stderr);
		return 1;
	}
	else
		return 0;
}