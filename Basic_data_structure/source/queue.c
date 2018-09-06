#include <stdio.h>
#include "queue.h"

_queue_t * queue_initialization() {
	_queue_t * q = (_queue_t *)malloc(sizeof(_queue_t *));

	if (!q) {
		fputs("The q allocation is failed", stderr);
		return NULL;
	}

	q->data = (_data_t *)malloc(sizeof(_data_t *) * MAX_QUEUE_SIZE);

	if (!q->data) {
		fputs("Queue allocation is failed", stderr);
	}

	q->rear = q->front = 0;

	return q;
}

int get_put(_queue_t * q) {
	_data_t input;
	printf("Input a data you wanna insert\n");
	scanf("%d", &input.num);

	return put(q, input);
}

int put(_queue_t * q, _data_t d) {
	if (is_full_queue(q)) {
		fputs("The queue is full", stderr);
		return -1;
	}

	q->data[q->rear] = d;
	q->rear++;

	return 1;
}

_data_t * get(_queue_t * q) {
	_data_t * out = NULL;

	if (is_empty_queue(q)) {
		fputs("The queue is empty", stderr);
		return NULL;
	}

	out = q->data + q->front;
	q->front++;

	return out;
}

int is_full_queue(_queue_t * q) {
	if (q->rear >= MAX_QUEUE_SIZE) {
		return 1;
	}
	else
		return 0;
}

int is_empty_queue(_queue_t * q) {
	if (q->front == q->rear) {
		return 1;
	} 
	else
		return 0;
}

void print_queue(_queue_t * q) {
	if (is_empty_queue(q)) {
		fputs("The q is empty, so can't print", stderr);
	}

	for (int i = q->front; i < q->rear; i++) {
		printf("Queue front : %d\trear : %d\tdata : %d\n", q->front, q->rear, q->data->num);
	}
}