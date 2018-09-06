#include <limits.h>

#ifndef __PHIBONACCI_H__
#define __PHIBONACCI_H__


typedef struct __pibonacci_t {
	int num;
	int * pibonacci;
	int sum;
	int count;
}_pibonacci_t;

_pibonacci_t * pibonacci_initialization();
int get_number();
void insert_pibonacci(_pibonacci_t * pibo);
int find_pibonacci(int num);
void print_pibonacci(_pibonacci_t * pibo);
void print_sum_pibonacci(_pibonacci_t * pibo);
void sum_pibonacci(_pibonacci_t * pibo);
int is_even(int num);

#endif