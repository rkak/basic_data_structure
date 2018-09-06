#include "data.h"

#ifndef __QUEUE_H__
#define __QUEUE_H__

#define MAX_QUEUE_SIZE 10
#define MIN_QUEUE_SIZE 0

typedef struct __queue_t {
	int rear;
	int front;
	_data_t * data;
}_queue_t;

typedef struct __linked_queue_t{
	int rear;
	int front;
	_linked_list_t * llq;
}

// ---------- queue --------------- //
_queue_t * queue_initialization();
int get_put(_queue_t * q);
int put(_queue_t * q, _data_t d);
_data_t * get(_queue_t * q);
int is_full_queue(_queue_t * q);
int is_empty_queue(_queue_t * q);
void print_queue(_queue_t * q);

// ---------- linked list queue -------------- //
_linked_queue_t * linked_queue_initalization();
int get_insert(_linked_queue_t * ll, int index);
int insert(_linked_queue_t * ll, _data_t d, int index);
_data_t * remove(_linked_queue_t * ll, int index);
int is_full_linked_queue(_linked_list_t * ll);
int is_empty_linked_queue(_linked_list_t * ll);
void print_linked_queue(_linked_list_t * ll);

#endif
