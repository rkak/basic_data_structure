#include "data.h"

_linked_list_t ll_initialization(){
	_linked_list_t * ll = (_linked_list_t *)malloc(sizeof(_linked_list_t *));
	if(!ll){
		fputs("The ll allocation is failed", stderr);
		return NULL;
	}
	ll->pre = NULL;
	ll->next = NULL;
  ll->data = (_data_t *)malloc(sizeof(_data_t*));

	if(!ll->data){
		fputs("The data of ll allocation is failed", stderr);
		return NULL;
	}
	return ll;
}

int insert_linked_list(_linked_list_t * ll, _data_t d){
	_linked_list_t * new = ll_initialization();
	new->data = d;
	for(; !ll->next; ll = ll->next){
		if(!ll->next){
			new->pre = ll;
			ll->next = new;
			return 1;
		}
	}
	return 0;
}

_data_t * remove_linked_list(_linked_list_t * ll, _data_t d){
	_linked_list_t current = ll;
	for(; !ll->pre; ll = ll->pre){
		if(ll->data->num == d->num){
			break;
		}
	}
	ll = current;

}

int is_full_linked_list(_linked_list_t * ll){
	// This function has no meaning.
}

int is_empty_linked_list(_linked_list_t * ll){

}

void print_linked_list(_linked_list_t * ll){
	for(; !ll->pre; ll = ll->pre);

	for(int i = 0; !ll->next; ll = ll->next){
		printf("%d th\t:\t%d\n", i, ll->data->num);
		i++;
	}
}
