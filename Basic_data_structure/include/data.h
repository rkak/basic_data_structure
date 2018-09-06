#ifndef __DATA_H__
#define __DATA_H__

typedef struct __data_t {
	int num;
}_data_t;

typedef struct __linked_list_t {
	_linked_list_t * pre;
	_data_t * data;
	_linked_list_t * next;
}_linked_list_t;

_linked_list_t ll_initialization();
int insert_linked_list(_linked_list_t * ll, _data_t d);
_data_t * remove_linked_list(_linked_list_t * ll, _data_t d);
int is_full_linked_list(_linked_list_t * ll);
int is_empty_linked_list(_linked_list_t * ll);
void print_linked_list(_linked_list_t * ll);

#endif
